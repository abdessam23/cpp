/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:30 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/10 18:43:02 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0){}
Span::Span(unsigned int n):N(n){ s.reserve(N);}
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
    if (s.size() >= N)
         throw std::out_of_range("No enough space ");
    s.push_back(n);    
}



int Span::shortestSpan()
{
     if (s.size() < 2)
        throw std::runtime_error("Not enough  elements");
    std::vector<int> tmp = s;
   std::sort(tmp.begin(),tmp.end());
   int minsp = tmp[1] - tmp[0];
   for (size_t i = 1 ; i < tmp.size();i++)
        minsp = std::min(minsp, tmp[i] - tmp[i - 1]);
   return minsp;   
}
int Span::longestSpan()
{
    if (s.size() < 2)
        throw std::runtime_error("Not enough  elements");
    std::vector<int> tmp = s;
    std::sort(tmp.begin(),tmp.end());
    return (tmp.back() - tmp.front());
}