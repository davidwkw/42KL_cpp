/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:47 by kwang             #+#    #+#             */
/*   Updated: 2022/03/31 14:01:37 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

bool ft_isNaN(double value)
{
	std::stringstream ss;
	std::string str;

	ss << value;
	ss >> str;
	if (str == "nan")
		return (true);
	return (false);
}

bool Scalar::ft_isInf(double value) const
{
	if (value < 0)
		value *= -1;
	return (value == std::numeric_limits<double>::infinity());
}

bool Scalar::ft_isInf(float value) const
{
	if (value < 0)
		value *= -1;
	return (value == std::numeric_limits<float>::infinity());
}

std::string Scalar::characterToAsciiValueStr(char c) const
{
	std::stringstream ss;
	std::string str;

	ss << static_cast<int>(c);
	ss >> str;
	return (str);
}

bool Scalar::hasDecimal() const
{
	std::stringstream ss;
	std::string str;

	ss << this->_value;
	ss >> str;
	if (str.find_first_of(".") != std::string::npos)
		return (true);
	return (false);
}

Scalar::Scalar(void) {}

Scalar::Scalar(std::string str)
{
	char *end_ptr;

	if (str.empty())
		throw NonScalarTypeException();
	if (str.size() > 1)
		this->_type = this->checkScalarType(str);
	else
		this->_type = CHAR;
	if (this->_type == CHAR && (std::isdigit(str[0]) == 0))
		str = this->characterToAsciiValueStr(str[0]);
	else if (this->_type == FLOAT)
		str.erase(str.size() - 1, 1);
	this->_value = std::strtod(str.c_str(), &end_ptr);
	if (*end_ptr != '\0')
		throw std::invalid_argument("Failed type conversion because of invalid input");
	switch (this->_type)
	{
		case CHAR:
			if (!this->isValidValue(this->_value,
				std::numeric_limits<char>::min(), std::numeric_limits<char>::max()))
				throw std::out_of_range("Input exceeds char limits");
			break;
		case INT:
			if (!this->isValidValue(this->_value,
				std::numeric_limits<int>::min(), std::numeric_limits<int>::max()))
				throw std::out_of_range("Input exceeds int limits");
			break;
		case FLOAT:
			if (!this->isValidValue(this->_value,
				-std::numeric_limits<float>::max(), std::numeric_limits<float>::max()))
				throw std::out_of_range("Input exceeds float limits");
			break;
		case DOUBLE:
			if (errno == ERANGE)
				throw std::out_of_range("Input exceeds double limits");
			if (!this->isValidValue(this->_value,
				-std::numeric_limits<double>::max(), std::numeric_limits<double>::max()))
				throw std::out_of_range("Input exceeds double limits");
			break;
		default:
			break;
	}
}

Scalar::~Scalar(void) {}

Scalar::Scalar(const Scalar & src)
{
	*this = src;
}

Scalar & Scalar::operator=(const Scalar & src)
{
	if (this != &src)
	{
		this->_value = src._value;
		this->_type = src._type;
	}
	return (*this);
}

double Scalar::getRawValue(void) const
{
	return (this->_value);
}

Scalar::data_type Scalar::getType(void) const
{
	return (this->_type);
}

Scalar::data_type Scalar::checkScalarType(const std::string &str)
{
	std::string pseudo_literal[] = {
		"-inff",
		"+inff",
		"nanf",
		"-inf",
		"+inf",
		"nan"
	};
	size_t	lit_arr_size = sizeof(pseudo_literal) / sizeof(pseudo_literal[0]);

	for (size_t i = 0; i < lit_arr_size; i++)
	{
		if (pseudo_literal[i] == str)
		{
			if (str == "nanf" || (str.find_first_of("f")) != (str.find_last_of("f")))
				return (FLOAT);
			else
				return (DOUBLE);
		}
	}
	size_t decimals = 0;
	size_t pos = 0;
	size_t negatives = 0;
	size_t positives = 0;
	size_t total_signs = 0;
	{
		if (str.find_first_not_of("-+0123456789.ef") != std::string::npos
			|| ((pos = str.find_first_of("f")) != std::string::npos && pos != str.size() - 1))
			throw NonScalarTypeException();
		pos = 0;
		while ((pos = str.find_first_of(".+-", pos)) != std::string::npos)
		{
			switch ((str[pos]))
			{
				case '+':
					positives++;
					break;
				case '-':
					negatives++;
					break;
				case '.':
					decimals++;
					break;
				default:
					break;
			}
			total_signs = positives + negatives;
			if (decimals > 1 || total_signs > 2)
				throw NonScalarTypeException();
			pos++;
		}
	}
	pos = str.find_first_of("e");
	if (decimals == 0 && (pos != std::string::npos))
		throw NonScalarTypeException();
	else if (decimals == 0
			&& (total_signs > 1 || (total_signs == 1 && str.find_first_of("+-") != 0)))
		throw NonScalarTypeException();
	else if (pos != std::string::npos
			&& (pos < str.find_first_of(".") || pos != str.find_last_of("e")))
		throw NonScalarTypeException();
	else if (pos != std::string::npos && (total_signs == 2 && str.find_first_of("+-") != 0))
		throw NonScalarTypeException();
	else if (pos != std::string::npos && (total_signs == 2 && str.find_first_of("+-") != 0 && str.find_last_of("+-") != (pos + 1)))
		throw NonScalarTypeException();
	if (decimals == 0)
		return (INT);
	else if (str[str.size() - 1] == 'f')
		return (FLOAT);
	else
		return (DOUBLE);
}

const char * Scalar::NonScalarTypeException::what() const throw()
{
	return ("Not a scalar type");
}

bool Scalar::isValidValue(double value, char lowerLim, char upperLim) const
{
	return (value >= lowerLim
			&& value <= upperLim);
}

bool Scalar::isValidValue(double value, int lowerLim, int upperLim) const
{
	return (value >= lowerLim
			&& value <= upperLim);
}

bool Scalar::isValidValue(double value, float lowerLim, float upperLim) const
{
	return (ft_isNaN(value)
		|| this->ft_isInf(static_cast<float>(value))
		|| (value >= lowerLim && value <= upperLim));
}

bool Scalar::isValidValue(double value, double lowerLim, double upperLim) const
{
	return (ft_isNaN(value)
		|| this->ft_isInf(value)
		|| (value >= lowerLim && value <= upperLim));
}

char Scalar::toChar( void ) const
{
	if (!this->isValidValue(this->_value,
		std::numeric_limits<char>::min(), std::numeric_limits<char>::max()))
		throw std::out_of_range("impossible");
	else if (!this->isValidValue(this->_value, 32, 126))
		throw std::out_of_range("Non displayable");
	return (static_cast<char>(this->_value));
}

int Scalar::toInt( void ) const
{
	if (!this->isValidValue(this->_value,
		std::numeric_limits<int>::min(), std::numeric_limits<int>::max()))
		throw std::out_of_range("impossible");
	return (static_cast<int>(this->_value));
}

float Scalar::toFloat( void ) const
{
	if (!this->isValidValue(this->_value,
		-std::numeric_limits<float>::max(), std::numeric_limits<float>::max()))
		throw std::out_of_range("impossible");
	return (static_cast<float>(this->_value));
}

double Scalar::toDouble( void ) const
{
	if (!this->isValidValue(this->_value,
		-std::numeric_limits<double>::max(), std::numeric_limits<double>::max()))
		throw std::out_of_range("impossible");
	return (static_cast<double>(this->_value));
}

std::ostream & operator<<(std::ostream & o, Scalar & rhs)
{
	double d_val;
	float f_val;

	o << "char: ";
	try
	{
		o << rhs.toChar() << '\n';
	}
	catch(const std::out_of_range& e)
	{
		o << e.what() << '\n';
	}
	o << "int: ";
	try
	{
		o << rhs.toInt() << '\n';
	}
	catch(const std::out_of_range& e)
	{
		o << e.what() << '\n';
	}
	o << "float: ";
	try
	{
		f_val = rhs.toFloat();
		if (f_val == std::numeric_limits<float>::infinity() && f_val > 0)
			o << '+';
		else if (f_val == std::numeric_limits<float>::infinity() && f_val < 0)
			o << '-';
		o << f_val;
		if (f_val < 0)
			f_val *= -1;
		if (!rhs.hasDecimal()
			&& f_val != std::numeric_limits<double>::infinity()
			&& !ft_isNaN(f_val))
			o << ".0";
		o << 'f' << '\n';
	}
	catch(const std::out_of_range& e)
	{
		o << e.what() << '\n';
	}
	o << "double: ";
	try
	{
		d_val  = rhs.toDouble();
		if (d_val == std::numeric_limits<double>::infinity() && d_val > 0)
			o << '+';
		else if (d_val == std::numeric_limits<double>::infinity() && d_val < 0)
			o << '-';
		o << d_val;
		if (d_val < 0)
			d_val *= -1;
		if (!rhs.hasDecimal()
			&& d_val != std::numeric_limits<double>::infinity()
			&& !ft_isNaN(d_val))
			o << ".0";
	}
	catch(const std::out_of_range& e)
	{
		o << e.what();
	}
	return (o);
}
