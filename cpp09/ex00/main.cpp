/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:44:04 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/29 14:09:39 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>  
#include <ctime> 
#include <map>
#include <sstream>



void find_data( std::map<std::string,float>& m,std::string& line)
{
    int pos;
    float f;
    if ((pos =line.find(",")) != std::string::npos)
    {
        std::stringstream ss(line.substr(pos + 1,line.length()));
        ss >> f;
        m.insert({line.substr(0,pos),f});
    }
    
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
void read_data(std::string str, std::map<std::string,float>& mp)
{

    std::string line;
    std::ifstream database(str);
    if (!database.is_open())
    {
        std::cerr << "Can't open file of database .\n";
    }
    while(std::getline(database,line))
    {
        if (line.find("date") != std::string::npos)// std::cout << "ok" <<std::endl;
            continue;
        find_data(mp,line);
    }
    
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
    std::map<std::string,float> mp;
    read_data("data.csv",mp);
    
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
    float value;
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
       {
            int pos;
            pos =line.find(" ");
            for(std::map<std::string,float >::const_iterator it = mp.begin(); it != mp.end();++it)
            {
                if (it->first == line.substr(0,pos))
                {
                    std::cout << it->first << " => " <<value << " = " << value * it->second << std::endl;
                     break;
                }
            }
       }
    }
}