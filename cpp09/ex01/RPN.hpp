/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:18:25 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/01 11:55:50 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <exception>

bool is_operator(char c);
int mkoperation(int a, int b,char c,bool& error);
bool is_valid_number(char c);
void rpnfun(std::stack<int>& stk,std::string& str);
#endif
