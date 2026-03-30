/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:05:14 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/30 15:55:59 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

int main(int ac, char** arg)
{
    if (ac != 2)
    {
        std::cerr << "Error : example usage : ./RPN  \"4 5 +\" " <<std::endl;
        return 1;
    }
    RPN a(arg[1]);
    try{
        a.rpnfun();
        std:: cout<< a.getstk() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}