/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:42:08 by abdo              #+#    #+#             */
/*   Updated: 2025/10/22 09:57:32 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string& file,const std::string& s1, const std::string& s2):file(file),s1(s1),s2(s2)
{
}
int Sed::Ft_Replace()
{
    std::string line;
    size_t pos = 0;
    std::string res;
    std::string newfile = file + ".replace";
    if ((s1.empty() && s2.empty()) || s1.empty())
    {
         std::cerr << "Error: some of strings or all  are empty!"  << std::endl;
        return (0);
    }
    std::ifstream infile(file.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: unable to read from file"<< std::endl;
        return (0);
    }
    std::ofstream outfile(newfile.c_str());
    while (!infile.eof())
    {
        std::getline(infile, line);
        res += line;
        if (!(infile.eof()))
            res += "\n";
    }
    while ((pos = res.find(s1, pos)) != std::string::npos)
    {
        res = res.substr(0, pos) + s2 + res.substr(pos + s1.length());
        pos += s2.length();
    }
    outfile << res;
    return (1);
}

Sed::~Sed(){}


