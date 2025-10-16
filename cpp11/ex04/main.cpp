/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:45:14 by abdo              #+#    #+#             */
/*   Updated: 2025/10/16 17:27:29 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Sed
{
    std::string s;
    public:
        Sed(std::string& str);
        std::string ft_Replace(std::string& s1,std::string& s2);
        ~Sed();
};

Sed::Sed(std::string& str):s(str)
{
}
std::string Sed::ft_Replace(std::string& s1,std::string& s2)
{
    while 
}
Sed::~Sed(){}

int main(int ac,char** argv)
{
    if (ac != 4)
    {
        std::cerr << "Please enter 3 argumants" << std::endl;
        return (1);
    }
    std::string str = argv[1];
    std::fstream file(str, std::ios::in);
    if (!file.is_open())
    {
        std::cerr << "Error: unable to read from file name : " << argv[1] << std::endl;
        return (1);
    }
    std::string s;
    std::getline(file, s);
    while ()
    {
        /* code */
    }
    
    std::cout << s << std::endl;
    
    
}