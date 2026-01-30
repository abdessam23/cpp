/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:44:04 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/30 11:23:18 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main(int ac,char** arg)
{
    if (ac != 2)
    {
        std::cerr << "Please enter file name !!\n";
        return 1; 
    }
    std::string s = arg[1];
    std::ifstream file(s.c_str()); 
    std::map<std::string,float> mp;
    try{
        read_data("data.csv",mp);
        if (!file.is_open())
        throw std::runtime_error("Can't open file .");
        read_input(file,mp);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}