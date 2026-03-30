/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:53:38 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/30 16:00:26 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

RPN::RPN(const std::string& str):str(str) {}
RPN::RPN(const RPN& other):str(other.str){}
RPN& RPN::operator=(const RPN& other) 
{
    this->str = other.str; 
    return *this; 
}
RPN::~RPN()
{
    
}

int RPN::getstk() const  
{
    if (stk.empty())
        throw std::runtime_error("Error : stack empty");
    return stk.top();     
}
bool RPN::is_operator(char c) const
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
        return 1;
    return 0;
}

int RPN::mkoperation(int a, int b,char c)  const
{
    switch (c)
    {
        case '*':
            return a * b;
        case '/':
            if (b == 0)
                throw std::runtime_error("Error : division by 0");
            return a / b;
        case '+':
            return a + b;
        case '-':
            return a - b;
        default:
             throw std::runtime_error("Error : unknown operator");
    }
}

void RPN::rpnfun() 
{
    
    for(size_t i = 0; i < str.length();i++)
    {
        if (str[i] == ' ')
            continue;
       
        if (is_operator(str[i]))
        {
            if (stk.size() < 2)
                throw std::runtime_error("Error");
            
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            int  result = mkoperation(a,b,str[i]);    
            stk.push(result);
        }

        else if (std::isdigit(str[i]))
        {
            stk.push(str[i] - '0');
        }
        else
            throw std::runtime_error("Error");
            
    }
    if (stk.size() != 1)
        throw std::runtime_error("Error");
}
