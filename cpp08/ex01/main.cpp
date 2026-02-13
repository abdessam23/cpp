/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:19:12 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/13 10:24:03 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
    Span sp = Span(12);
    
    std::vector<int> p;
    p.push_back(5);
    p.push_back(8);
    p.push_back(3);
    p.push_back(1);
    p.push_back(12);
    
    try{
        sp.addNumber(0);
        sp.addrange(p.begin(),p.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}