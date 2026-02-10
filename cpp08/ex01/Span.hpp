/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:56:21 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/10 18:43:12 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <vector>
#include <numeric>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int N;
        std::vector<int> s;
        Span();
    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(const int n);
        template <typename T>
        void addrange(T begin, T end)     
        {
            if ( s.size() +  std::distance(begin,end) >= N)
                throw std::runtime_error("No enough space ");
            s.insert(s.end(), begin,end);
        }
  
        int shortestSpan();
        int longestSpan();
        
};