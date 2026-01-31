/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:05:14 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/31 10:50:29 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <sstream>

int mkoperation(int a, int b,char c)
{
    if (c == '*')
        return a * b;
    else if (c == '/')
    {
        if (b != 0)
            return a / b;
        else return -1;
    }
    else if (c == '+')
        return a + b;
    else if (c == '-')
        return a - b;
    else 
        return -1;
}
bool is_valid_number(char c)
{
    if (c >= 0 && c <= 9)
        return 1;
    return 0;
}

int main(int ac, char** arg)
{
    if (ac != 2)
    {
        return 1;
    }
    std::string str = arg[1];
    std::stack<int> stk;
    // std::stringstream ss(str);
    
    for(size_t i = 0; i < str.length();i++)
    {
        if (i == 0 && !std::isdigit(str[i]))
        {
            std::cerr <<  "Error" << std::endl;
            return 1;
        }
        else if (is_valid_number(str[i]))
        {
            stk.push(
        }
        
    }
}