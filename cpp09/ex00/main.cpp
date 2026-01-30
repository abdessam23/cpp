/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:44:04 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/30 10:46:30 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>  
#include <ctime> 
#include <map>
#include <exception>
#include <sstream>
#include <algorithm>

void find_data( std::map<std::string,float>& m,std::string& line)
{
    int pos;
    float f;
    pos =line.find(",");
    std::stringstream ss(line.substr(pos + 1,line.length()));
    ss >> f;
    m.insert({line.substr(0,pos),f});
}

void  check_value(double value)
{
    if (value < 0)
        throw std::runtime_error("Error: Not a positive number ");
    if ( value > 1000)
        throw std::runtime_error("Error: Too large number ");
}


void check_char(char* d)
{
    if (d[0] != '-' || d[1] != '-' || d[2] != '|')
        throw std::runtime_error("invalid input ");
}
void check_date(int y,int m,int d)
{
   if (y < 2008 || y > 2027)
        throw std::runtime_error("no data about bitcoin in this year ");
   if (m < 1 || m > 12)
      throw std::runtime_error("invalid month.");
   
    if (((m == 2 )&& (d < 1 || d > 29)) || ((m != 2 )&& (d < 1 || d > 31)))
        throw std::runtime_error("Error:invalid day ");  
}
void read_data(std::string str, std::map<std::string,float>& mp)
{
    std::string line;
    std::ifstream database(str);
    if (!database.is_open())
      throw std::runtime_error("Can't open file of database .\n");
    while(std::getline(database,line))
    {
        if (line.find("date") != std::string::npos)// std::cout << "ok" <<std::endl;
            continue;
        find_data(mp,line);
    }
}

void find_result(std::map<std::string,float >& mp, std::string& line,float& value)
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

void read_input(std::ifstream& file ,std::map<std::string,float>& mp)
{
    std::string line;
    int y;
    int m;
    int d;
    char dash[3];
    float value;
    int i = 0;
    while(std::getline(file,line))
    {
        if (line.find("date") != std::string::npos)// std::cout << "ok" <<std::endl;
            continue;
        std::stringstream ss(line);
        try{
            if ( !(ss >> y >> dash[0] >> m >> dash[1]>> d >> dash[2] >> value))
                throw std::runtime_error("bad input.");
            check_date(y,m,d);
            check_char(dash);
            check_value(value);
            find_result(mp,line,value);
        }
        catch(std::exception& e)
        {
        std::cout << e.what() << std::endl;
        }
    }
}
int main(int ac,char** arg)
{
    if (ac != 2)
    {
        std::cerr << "Please enter file name .";
        return 1; 
    }
    std::string s = arg[1];
    std::ifstream file(s);
    std::map<std::string,float> mp;
    try{
        read_data("data.csv",mp);
        if (!file.is_open())
        throw std::runtime_error("Can't open file .");
        read_input(file,mp);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}