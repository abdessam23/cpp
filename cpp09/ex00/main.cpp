/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:44:04 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/29 12:29:45 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>  
#include <ctime> 
#include <map>
#include <sstream>



void find_data(std::string line)
{
    int pos;
    std::map<std::string,std::string >  m;
    if ((pos =line.find(" | ")) != std::string::npos)
    {
        m.insert({line.substr(0,pos),line.substr(pos + 3,line.length())});
    }
    else
    m.insert({line,"notfound"});
    std::map<std::string,std::string >::iterator it;
}

bool check_data(char* d,double value)
{
    if (d[0] != '-' || d[1] != '-' || d[2] != '|')
    {
        std::cerr << "invalid input";
        return false;
    }
    if (value < 0 || value > 1000)
    {
        std::cerr << "the value should be between 0 and 1000";
        return false;
    }
    return true;
    
}
bool check_date(int y,int m,int d)
{
   if (y < 2008 || y > 2027)
   {
        std::cerr << "there no data about bitcoin in this year.";
        return false;
   }
   
   if (m < 1 || m > 12)
   {
       std::cerr << "invalid month.";
       return false;
   }
    if ((m == 2 )&& (d < 1 || m > 29))
    {
        std::cerr << "invalid day in this month.";
        return false;
    }
    if ((m != 2 )&& (d < 1 || m > 31))
    {
        std::cerr << "invalid day in this month.";
        return false;
    }
    return true;
        
}

int main(int ac,char** arg)
{
    if (ac != 2)
    {
        std::cerr << "Please enter file name .\n";
        return 1; 
    }
    std::string s = arg[1];
    std::ifstream file(s);
    std::ifstream database("data.csv");
    
    if (!file.is_open())
    {
        std::cerr << "Can't open file .\n";
        return 1;
    }
    std::string line;
    int y;
    int m;
    int d;
    char dash[3];
    double value;
    int i = 0;
    while(std::getline(file,line))
    {
     
        if (line.find("date") != std::string::npos)// std::cout << "ok" <<std::endl;
            continue;
  
        std::stringstream ss(line);
       if ( !(ss >> y >> dash[0] >> m >> dash[1]>> d >> dash[2] >> value))
       {
          std::cerr << "bad input.\n";
          continue;
       }
       if (!check_data(dash,value) || !check_date(y,m,d))
       {
           std::cout << " => "<< line <<std::endl;
       }
       else 
        std::cout << line <<std::endl;
        i++;
    }
}