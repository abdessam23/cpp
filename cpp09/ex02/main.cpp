/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/13 12:45:53 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
    while (arg[i])
    {
       str += arg[i]; 
       i++;
    }
    for(int i = 0;i < str.length();i++)
    {
        std::cout << str[i] <<std::endl;
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