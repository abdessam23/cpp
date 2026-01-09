/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:30 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/09 10:58:19 by abhimi           ###   ########.fr       */
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
            s.push_back(n);
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
        if (s.size() > 1)
        {
            std::set<int> st;
            for(size_t i = 0; i < s.size();i++)
            {
                st.insert(s[i]);
            }
             std::set<int>::iterator it = st.begin();
             int shortest;
             std::set<int>::iterator i = it;
            ++it;
             shortest = *it - *i;
            for (; it != st.end();++it,++i)
            {
                if (shortest > (*it - *i))
                    shortest = *it - *i;
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
        
        if (s.size() > 1)
        {
            std::set<int> st;
            for(size_t i = 0; i < s.size();i++)
            {
                st.insert(s[i]);
            }
            std::set<int>::iterator it = st.begin();
            std::set<int>::iterator i = it;
            std::advance(it,st.size()-1);
            return (*it - *i);
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