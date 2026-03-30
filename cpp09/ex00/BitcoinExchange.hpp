/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:32:54 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/30 17:57:35 by abhimi           ###   ########.fr       */
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

class BitcoinExchange
{
    private:
        std::map<std::string,float> mp;
        std::string str;
        

        void find_data( std::map<std::string,float>& m,std::string& line);
        void check_charval(char* d,float& value);
        void check_date(int y,int m,int d);
        void find_result(std::string& line,float& value);
     
    public:
        BitcoinExchange(); 
        BitcoinExchange(const std::string& str);
        ~BitcoinExchange();
        void read_data(std::string str);
        void read_input();
};

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const std::string& str):str(str)
{
} 

BitcoinExchange::~BitcoinExchange()
{
}






#endif