/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:30 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/05 12:31:47 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}
Span::Span(unsigned int n):N(n){}
Span::Span(const Span& other):N(other.N){}
Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        N = other.N;
    }
    return *this;
}
Span::~Span(){}

void Span::addNumber(const int n)
{
    try{
        if (s.size() <= N)
            s.insert(n);
        else
            throw std::out_of_range("span is full");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() <<std::endl;
    }
}
int Span::shortestSpan()
{
    try{
        if (s.size() == 0 || s.size() == 1)
            return(s[1] - s[0]);
        else
            throw std::out_of_range("span is full");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() <<std::endl;
    }
}
int Span::longestSpan()
{
    try{
        if (s.size() == 0 || s.size() == 1)
            return(s[s.size() - 1] - s[0]);
        else
            throw std::out_of_range("span is full");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() <<std::endl;
    }
}