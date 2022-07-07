/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:30:27 by kwang             #+#    #+#             */
/*   Updated: 2022/03/30 23:16:48 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>

template <typename T>
void print(T val)
{
	std::cout << val;
}

template <typename T>
void print(T val, std::string str)
{
	std::cout << val << str;
}

int main()
{
	print("Default pdf test\n");
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	print("Numbers within the span are 6, 3, 17,9, 11\n");
	print("Shortest span:\n");
	std::cout << sp.shortestSpan() << std::endl;
	print("Longest span:\n");
	std::cout << sp.longestSpan() << '\n' << std::endl;

	print("Span calculation with no value test\n");
	Span sp2(3);
	try
	{
		print("Shortest span:\n");
		print(sp2.shortestSpan());
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	print('\n');
	try
	{
		print("Longest span:\n");
		print(sp2.longestSpan());
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	print("\n\n");
	print("Span calculation with single value test\n");
	sp2.addNumber(1000);
	try
	{
		print("Shortest span:\n");
		print(sp2.shortestSpan());
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	print("\n\n");
	try
	{
		print("Longest span:\n");
		print(sp2.longestSpan());
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	print("\n\n");
	print("Span calculation with multiple value test\n");
	sp2.addNumber(400);
	sp2.addNumber(900);
	print("Values in the span are 400, 900, 1000\n");
	try
	{
		print("Shortest span:\n");
		print(sp2.shortestSpan(), "\n");
		std::cout << "1000 - 900 == 100 is "<< std::boolalpha << ((1000 - 900) == 100);
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	print("\n\n");
	try
	{
		print("Longest span:\n");
		print(sp2.longestSpan(), "\n");
		std::cout << "1000 - 400 == 600 is " << std::boolalpha << ((1000 - 400) == 600);
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	print("\n\n");
	print("Span overflow test\n");
	try
	{
		sp2.addNumber(9000);
	}
	catch (const Span::SpanIsFullException& e)
	{
		std::cerr << e.what();
	}
	print('\n');
	print("Large span test\n");
	Span sp3(10000);
	srand(time(NULL));
	std::vector<int> temp(10000);
	std::generate(temp.begin(), temp.end(), rand);
	int min = *(std::min_element(temp.begin(), temp.end()));
	int max = *(std::max_element(temp.begin(), temp.end()));
	std::cout << "Minimum value of a random list of 10000 integers is: " << min << std::endl;
	std::cout << "Maximum value of a random list of 10000 integers is: " << max << std::endl;
	sp3.addNumber(temp.begin(), temp.end());
	try
	{
		print("Shortest span:\n");
		print(sp3.shortestSpan());
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	print('\n');
	try
	{
		print("Longest span:\n");
		print(sp3.longestSpan());
	}
	catch(const Span::NoSpanFoundException& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
	return 0;
}
