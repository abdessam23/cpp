/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:32:54 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/30 11:12:48 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>  
#include <ctime> 
#include <map>
#include <exception>
#include <sstream>
#include <algorithm>

void find_data( std::map<std::string,float>& m,std::string& line);
void check_charval(char* d,float& value);
void check_date(int y,int m,int d);
void read_data(std::string str, std::map<std::string,float>& mp);
void find_result(std::map<std::string,float >& mp, std::string& line,float& value);
void read_input(std::ifstream& file ,std::map<std::string,float>& mp);


#endif