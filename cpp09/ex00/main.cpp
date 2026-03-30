/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:44:04 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/30 18:06:19 by abhimi           ###   ########.fr       */
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
    BitcoinExchange btc(arg[1]);
    try{
        btc.read_data("data.csv");
        btc.read_input(); 
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}