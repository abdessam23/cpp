/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:19:12 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/04 16:28:07 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
    Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // int j = 4 ;
    // for (int i = 0 ;i <= 10000;i++)
    // {
    //     j++;
    //     sp.addNumber(j);
    // }
    std::vector<int> v(3);
    v[0] = 2;
    v[1] = 7;
    v[2] = 5;
    sp.addmultnumber(v);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}