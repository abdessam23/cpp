/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:56:21 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/10 17:43:52 by abhimi           ###   ########.fr       */
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
        void addrange(int range[], size_t len);
        int shortestSpan();
        int longestSpan();
        
};