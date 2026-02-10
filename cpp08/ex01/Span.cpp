/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:30 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/10 18:06:34 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0){}
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
    if (s.size() < N)
        s.push_back(n);
    else
        throw std::out_of_range("span is full");
}

void Span::addrange(int range[], size_t len)    
{
   for (size_t i = 0; i  < len;i++)
   {
        addNumber(range[i]);
   }
}

int Span::shortestSpan()
{
     if (s.size() < 2)
        throw std::runtime_error("the span empty or has only one element");
    std::vector<int> tmp = s;
   std::sort(tmp.begin(),tmp.end());
   std::vector<int> arr(tmp.size());
   std::adjacent_difference(tmp.begin(),tmp.end(),arr.begin()); 
   return *std::min_element(arr.begin() + 1, arr.end());
   
}
int Span::longestSpan()
{
    if (s.size() < 2)
        throw std::runtime_error("the span empty or has only one element");
    std::vector<int> tmp = s;
    std::sort(tmp.begin(),tmp.end());
    return (tmp.back() - tmp.front());
}