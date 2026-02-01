/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:30 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/01 16:12:18 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}
Span::Span(unsigned int n):N(n){}
Span::Span(const Span& other):N(other.N),s(other.s){}
Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        N = other.N;
        s = other.s;
    }
    return *this;
}
Span::~Span(){}

void Span::addNumber(const int n)
{
    if (s.size() <= N)
        s.push_back(n);
    else
        throw std::out_of_range("span is full");
}

void Span::addmultnumber(std::vector<int>& vec)   
{
   for (std::vector<int>::iterator it = vec.begin(); it != vec.end();++it)
   {
        addNumber(*it);
   }
}

int Span::shortestSpan()
{
     if (s.size() < 2)
        throw std::runtime_error("the span empty or has only one element");
   std::sort(s.begin(),s.end());
   std::vector<int> arr(s.size());
   std::adjacent_difference(s.begin(),s.end(),arr.begin()); 
   return *std::min_element(arr.begin() + 1, arr.end());
   
}
int Span::longestSpan()
{
    if (s.size() < 2)
        throw std::runtime_error("the span empty or has only one element");
    std::sort(s.begin(),s.end());
    return (s.back() - s.front());
}