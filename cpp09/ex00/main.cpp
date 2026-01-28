/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:44:04 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/28 16:11:06 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>  
#include <ctime>
#include <map>
#include <sstream>

void check_data(std::string line)
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

int main(int ac,char** arg)
{
    if (ac != 2)
    {
        std::cerr << "Please enter file name .\n";
        return 1; 
    }
    std::string s = arg[1];
    std::ifstream file(s);
    
    if (!file.is_open())
    {
        std::cerr << "Can't open file .\n";
        return 1;
    }
    std::string line;
    std::stringstream ss;
    // std::tm tm= {};
    int i = 0;
    while(std::getline(file,line))
    {
        if(i == 0)
        {
            if (line.find("date") != std::string::npos)// std::cout << "ok" <<std::endl;
                ;
            else
            {
                std::cerr<< "Error : the file should start with 'date | value' ." <<std::endl;
                return 1;
            }
            i++;
            continue;
        }
        check_data(line);
        i++;
    }
    
    
   
    
}