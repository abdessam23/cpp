/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:19:12 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/10 17:46:27 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
    Span sp = Span(8);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // // int j = 4 ;
    // // for (int i = 0 ;i <= 10000;i++)
    // // {
    // //     j++;
    // //     sp.addNumber(j);
    // // }
    int arr[] = {2,1,3,4,5,6,77,8,86,0};
    sp.addrange(arr,10);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}