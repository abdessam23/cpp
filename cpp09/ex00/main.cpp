/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:44:04 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/28 12:52:06 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>  

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
    std::istringstream ss;
    ss << file; 
    
}