/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:49 by kwang             #+#    #+#             */
/*   Updated: 2022/03/31 14:00:46 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP

# define SCALAR_HPP
# include <string>
# include <cctype>
# include <iostream>
# include <exception>
# include <stdexcept>
# include <cstdlib>
# include <limits>
# include <cerrno>
# include <sstream>

bool ft_isNaN(double value);

class Scalar
{
	private:
		enum data_type{
			CHAR = 0,
			INT = 1,
			FLOAT = 2,
			DOUBLE = 3
		};

		double _value;
		data_type _type;
		Scalar(void);
		bool ft_isInf(double value) const;
		bool ft_isInf(float value) const;
		std::string characterToAsciiValueStr(char c) const;
		bool isValidValue(double value, char lowerLim, char upperLim) const;
		bool isValidValue(double value, int lowerLim, int upperLim) const;
		bool isValidValue(double value, float lowerLim, float upperLim) const;
		bool isValidValue(double value, double lowerLim, double upperLim) const;
	public:
		Scalar(std::string str);
		~Scalar(void);
		Scalar(const Scalar & src);
		Scalar & operator=(const Scalar & src);

		data_type checkScalarType(const std::string &str);
		double getRawValue(void) const;
		data_type getType(void) const;

		char toChar( void ) const;
		int toInt( void ) const;
		float toFloat( void ) const;
		double toDouble( void ) const;

		bool hasDecimal(void) const;

		class NonScalarTypeException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Scalar & rhs);

#endif
