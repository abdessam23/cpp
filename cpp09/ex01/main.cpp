/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:05:14 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/31 11:08:28 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <sstream>

bool is_operator(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
        return 1;
    return -1;
}

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
    int a,b;
    for(size_t i = 0; i < str.length();i++)
    {
        if (i == 0 && !std::isdigit(str[i]))
        {
            std::cerr <<  "Error" << std::endl;
            return 1;
        }
        if (is_operator(str[i]))
        {
            b = stk.top();
            stk.pop();
            a = stk.top();
            stk.pop();
            stk.push(mkoperation(a,b,str[i]));
        }
    }
    std:: cout<< stk.top() << std::endl;
}