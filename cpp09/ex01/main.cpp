/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:05:14 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/01 11:57:27 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

int main(int ac, char** arg)
{
    if (ac != 2)
    {
        return 1;
    }
    std::string str = arg[1];
    std::stack<int> stk;
    try{
        rpnfun(stk,str);
        std:: cout<< stk.top() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}