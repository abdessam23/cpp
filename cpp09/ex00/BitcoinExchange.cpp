/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:32:47 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/30 18:10:52 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const std::string& str):str(str){} 

BitcoinExchange::~BitcoinExchange()
{
}
void BitcoinExchange::find_data(std::string& line) 
{
    int pos;
    float f;
    pos =line.find(",");
    std::stringstream ss(line.substr(pos + 1,line.length()));
    ss >> f;
    mp.insert(std::make_pair(line.substr(0,pos),f));
}



void BitcoinExchange::check_charval(char* d,float& value)
{
    if (d[0] != '-' || d[1] != '-' || d[2] != '|')
        throw std::runtime_error("invalid input ");
    if (value < 0)
        throw std::runtime_error("Error: Not a positive number ");
    if ( value > 1000)
        throw std::runtime_error("Error: Too large number ");
}
void BitcoinExchange::check_date(int y,int m,int d)
{
    (void) y;
   if (y < 2008 || y > 2027)
        throw std::runtime_error("no data about bitcoin in this year ");
   if (m < 1 || m > 12)
      throw std::runtime_error("invalid month.");
   
    if (((m == 2 )&& (d < 1 || d > 29)) || ((m != 2 )&& (d < 1 || d > 31)))
        throw std::runtime_error("Error:invalid day ");  
}
void BitcoinExchange::read_data(std::string str)
{
    std::string line;
    std::ifstream database(str.c_str());
    if (!database.is_open())
      throw std::runtime_error("Can't open file of database .\n");
    while(std::getline(database,line))
    {
        if (line.find("date") != std::string::npos)// std::cout << "ok" <<std::endl;
            continue;
        find_data(line);  
    }
}

void BitcoinExchange::find_result(std::string& line,float& value) 
{
    int pos;
    bool t = false;
    pos =line.find(" ");
    for(std::map<std::string,float >::const_iterator it = mp.begin(); it != mp.end();++it)
    {
        if (it->first == line.substr(0,pos))
        {
            t = true;
            std::cout << it->first << " => " <<value << " = " << value * it->second << std::endl;
             break;
        }
    }
    if (!t)
    {
        std::map<std::string,float>::const_iterator ite =  mp.lower_bound(line.substr(0,pos));
           --ite;
        std::cout << line.substr(0,pos) << " => " <<value << " = " << value * ite->second << std::endl;
    }
}

void BitcoinExchange::read_input() 
{
    std::string line;
    int y;
    int m;
    int d;
    char dash[3];
    float value;
    
    std::ifstream file(str.c_str()); 
    if (!file.is_open())
        throw std::runtime_error("Can't open file .");
    while(std::getline(file,line))
    {
        std::stringstream ss(line);
        if ((line.find("date") != std::string::npos) || line.empty())
            continue;
        try{
            if (!(ss >> y >> dash[0] >> m >> dash[1]>> d >> dash[2] >> value))
                throw std::runtime_error("bad input.");
            check_date(y,m,d);
            check_charval(dash,value);
            find_result(line,value);
        }
        catch(std::exception& e)
        {
        std::cout << e.what() << std::endl;
        }
    }
}