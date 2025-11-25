/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:36:41 by abdo              #+#    #+#             */
/*   Updated: 2025/10/22 10:53:15 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int arc, char **argv)
{
    Harl a;
    int i = 0;
    int levelindex  = -1;
   
    if (arc != 2)
    {
        std::cerr << "Usage: ./HarlFilter <level> " << std::endl;
        return 1;   
    }
    std::string str = argv[1];
    if (str.empty())
        return 0;
    const std::string levels[4]= {"DEBUG","INFO" ,"WARNING","ERROR"};
     while (levels[i] != str && i < 4)
        i++;
    levelindex = i;
    switch (levelindex)
    {
        case 0:
            a.complain(levels[0]);
        case 1:
            a.complain(levels[1]);
        case 2:
            a.complain(levels[2]);
        case 3:
            a.complain(levels[3]);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return 0;
}