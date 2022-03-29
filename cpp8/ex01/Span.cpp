/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:30:22 by kwang             #+#    #+#             */
/*   Updated: 2022/03/30 00:19:28 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Span::min_size_check(void) const
{
	if (this->_span.empty() || this->_span.size() < 2)
		throw NoSpanFoundException();
}

Span::Span(void) {}

Span::Span(unsigned int N) : _max_size(N)
{
	this->_span.reserve(N);
}

Span::~Span(void) {}

Span::Span(Span const &rhs)
{
	*this = rhs;
}

Span & Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_span.assign(rhs._span.begin(), rhs._span.end());
		this->_max_size = rhs._max_size;
	}
	return (*this);
}

const char * Span::NoSpanFoundException::what() const throw()
{
	return "No span found";
}

const char * Span::SpanIsFullException::what() const throw()
{
	return "Span is full";
}

void Span::addNumber(int value)
{
	if (this->_span.size() <= this->_max_size)
		this->_span.push_back(value);
	else
		throw SpanIsFullException();
}

unsigned int Span::shortestSpan(void) const
{
	this->min_size_check();
	std::vector<int> temp(this->_span.size());
	std::partial_sort_copy(this->_span.begin(), this->_span.end(), temp.begin(), temp.end());
	std::transform(temp.begin() + 1, temp.end(), temp.begin(), temp.begin(), std::minus<int>());
	return (*(std::min_element(temp.begin(), temp.end() - 1)));
}

unsigned int Span::longestSpan() const
{
	this->min_size_check();
	int min_val;
	int max_val;
	min_val = *(std::min_element(this->_span.begin(), this->_span.end()));
	max_val = *(std::max_element(this->_span.begin(), this->_span.end()));
	return (max_val - min_val);
}
