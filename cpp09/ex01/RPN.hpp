/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:18:25 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/29 23:59:47 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <exception>
class RPN
{
private:
    std::stack<int> stk;
    std::string str;
    RPN(const RPN& other); 
    RPN& operator=(const RPN& other);
    bool is_operator(char c);
    int mkoperation(int a, int b,char c);
    
public:
    RPN(const std::string str);
    int getstk() const;
    ~RPN();
    void rpnfun();
};

#endif
