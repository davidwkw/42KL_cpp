/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:30:20 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:30:21 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

#define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>
#include <functional>

class Span
{
	private:
		std::vector<int> _span;
		unsigned int _max_size;

		Span(void);
		void min_size_check(void) const;
	public:
		Span(unsigned int N);
		Span(Span const &rhs);
		Span & operator=(Span const &rhs);
		~Span(void);

		void addNumber(int value);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		template <class InputIterator>
		void assign(InputIterator first, InputIterator last);

		class SpanIsFullException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class NoSpanFoundException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

template <class InputIterator>
void Span::assign(InputIterator first, InputIterator last)
{
	for (;first != last; ++first)
	{
		if (this->_span.size < this->_max_size)
			this->_span.push_back(*first);
		else
			throw SpanIsFullException();
	}
}

#endif
