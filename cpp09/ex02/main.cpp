/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/13 12:58:29 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
int Is_valid(char* str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]) && str[i] != ' ')
            return 0;
        i++;
    }
    return 1;
}

int check_arg(char **arg)
{
    int i =1;
    while (arg[i])
    {
       if (!Is_valid(arg[i]))
        return 0;
       i++;
    }
    return 1;
}

void fill_string(char** arg,std::string &str)
{
    int i = 1;
    std::string s;
     std::string tmp;
    while (arg[i])
    {
       s += arg[i]; 
       i++;
    }
    std::stringstream ss(s);
    while(std::getline(ss,tmp,' '))
    {
        str += tmp;
    }
}
   

int main(int ac, char** arg)
{
    if(ac < 2)
    {
        std::cerr<< "Error please enter one integers or more "<< std::endl;
        return 1;
    }
    if (!check_arg(arg))
    {
        std::cerr<< "Invalid input"<< std::endl;
        return 1;
    }
    std::string  str;
    fill_string(arg,str);
    for(int i = 0;i < str.length();i++)
    {
        std::cout << str[i] <<std::endl;
    }
    
    return 0;
    
}