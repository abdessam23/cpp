/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:30 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/06 10:40:24 by abhimi           ###   ########.fr       */
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
    //  3 6 9 11 17
    try{
        if (s.size() != 0 && s.size() != 1)
        {
             std::set<int>::iterator it = s.begin();
             int shortest;
             int i = *it;
             int j = 1;
             std::advance(it,1);
             shortest = *it - i;
            for (it = s.begin(); it != s.end();it++)
            {
                int i = *it;
                 std::cout << "j : "<<j <<std::endl;
                std::advance(it,j);
                if (shortest > (*it - i))
                    shortest = *it - i;
                // std::advance(it,j - 1);
                j++;
                // std::advance(it,j - 1);
            }
            return shortest;
       
        }
        else
            throw std::runtime_error("the span empty or has only one element");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() <<std::endl;
        return 0;
    }
}
int Span::longestSpan()
{
    try{
        
        if (s.size() != 0 && s.size() != 1)
        {
            std::set<int>::iterator it = s.begin();
            int i = *it;
              std::advance(it,N-1);;
            return (*it - i);
        }
        else
            throw std::runtime_error("the span empty or has only one element");;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() <<std::endl;
        return 0;
    }
}