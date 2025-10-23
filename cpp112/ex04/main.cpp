/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:03:46 by abdo              #+#    #+#             */
/*   Updated: 2025/09/14 12:12:54 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::string ft_replaceit(std::string line, std::string s1, std::string s2)
{
    std::stringstream ss(line);
    std::string word;
    std::string str;
    std::vector<std::string> words;
    if (line.empty())
        return line;
 
    while (ss >> word)
    {
        if(word == s1)
        {
            word = s2;
        }
        words.push_back(word);
    }
    for (size_t i = 0; i < words.size();i++)
    {
        str += words[i] + " " ;
    }
    return str;
}


int main(int arc, char **argv)
{
    if (arc != 4)
    {
        std::cout  << "please enter three argument."<< std::endl;
        return 1;
    }
    std::fstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cout  << "the file does not exist or permission denied" << std::endl;
        return 1;
    }
    std::string  line;
    std::string file;
    std::ofstream MyFile("newfile");
    while (std::getline(inputFile,line))
    {
        if(line.find(argv[2]) != std::string::npos)
        {
            line  = ft_replaceit(line,argv[2],argv[3]);
        }
        MyFile << line + "\n";
    }
    inputFile.close();
    MyFile.close();
    return 0;
    
}