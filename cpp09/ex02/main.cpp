/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/14 09:12:42 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <climits>
#include <algorithm>

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

void fill_string(char** arg,std::vector<std::string> &str)
{
    int i = 1;
    std::string s;
     std::string tmp;
    while (arg[i])
    {
       s += arg[i] ; 
       s += " ";
       i++;
    }
    std::stringstream ss(s);
    while(ss >>tmp)
    {
        str.push_back(tmp);
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
    std::vector<std::string>  str;
     std::vector<int>  arr;
    fill_string(arg,str);
    
    for(int i = 0;i < str.size();i++)
    {
        double n = std::strtod(str[i].c_str(),NULL);
        if (n < INT_MIN || n > INT_MAX )
        {
            std::cerr << "Error : overflow" << std::endl;
            return 1;
        }
        else
            arr.push_back(n);
    } 
    std::cout << "The array before sorting : ";
    for(int i = 0;i < arr.size();i++)
    {
        std::cout << arr[i] <<" ";
    }
    std::sort(arr.begin(),arr.end());
    std::cout << "\n\nThe array after sorting : ";
    for(int i = 0;i < arr.size();i++)
    {
        std::cout << arr[i] <<" ";
    }
     std::cout << "\n";
    return 0;
    
}