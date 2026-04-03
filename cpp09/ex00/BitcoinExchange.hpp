/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:32:54 by abhimi            #+#    #+#             */
/*   Updated: 2026/04/01 00:04:31 by abhimi           ###   ########.fr       */
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
        

        void find_data(const std::string& line); 
        void check_value(float value) const;    
        void check_date(int y,int m,int d) const;  
        void find_result(std::string& date,float value) const; 
        void find_result(const std::string& date, float value) const;
        
        BitcoinExchange(); 
        BitcoinExchange(const BitcoinExchange&);
        BitcoinExchange& operator=(const BitcoinExchange&); 
     
    public:
        
        BitcoinExchange(const std::string& str);
        ~BitcoinExchange();
        void read_data(const std::string& data); 
        void read_input();
};

#endif