/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:42:08 by abdo              #+#    #+#             */
/*   Updated: 2025/10/17 18:45:54 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string& file,const std::string& s1, const std::string& s2):file(file),s1(s1),s2(s2)
{
}
int Sed::Ft_Replace()
{
    std::string line;
    size_t pos;
    
    if ((s1.empty() && s2.empty()) || s1.empty())
    {
         std::cerr << "Error: some of strings or all  are empty!"  << std::endl;
        return (0);
    }
    std::fstream infile(file, std::ios::in);
    std::ofstream outfile( file + ".replace", std::ios::out);
    if (!infile.is_open())
    {
        std::cerr << "Error: unable to read from file"<< std::endl;
        return (0);
    }
    while (std::getline(infile, line)) {
        pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outfile << line << std::endl;
    }
    return (1);
}

Sed::~Sed(){}