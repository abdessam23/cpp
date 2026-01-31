/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:05:14 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/31 14:28:45 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <sstream>
#include <exception>

bool is_operator(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
        return 1;
    return 0;
}

int mkoperation(int a, int b,char c,bool& error)
{
    if (c == '*')
        return a * b;
    else if (c == '/')
    {
        if (b != 0)
            return a / b;
        else
        {
            error = true;
            return 0;
        } 
            
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
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

void rpnfun(std::stack<int>& stk,std::string& str)
{
    int a,b,result;
     bool error;
    for(size_t i = 0; i < str.length();i++)
    {
        if (str[i] == ' ')
            continue;
       
        if (is_operator(str[i]))
        {
            if (stk.size() < 2)
                throw std::runtime_error("Error");
            
            b = stk.top();
            stk.pop();
            a = stk.top();
            stk.pop();
            
            error = false;
            result = mkoperation(a,b,str[i],error);
            
            if (error)
                throw std::runtime_error("Error");
                
            stk.push(result);
        }

        else if (is_valid_number(str[i]))
        {
            stk.push(str[i] - '0');
        }
        else
            throw std::runtime_error("Error");
            
    }
    if (stk.size() != 1)
        throw std::runtime_error("Error");
    else 
        std:: cout<< stk.top() << std::endl;
}

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
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}