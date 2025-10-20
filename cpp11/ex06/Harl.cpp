/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:03:13 by abdo              #+#    #+#             */
/*   Updated: 2025/10/20 18:23:59 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra beef steak for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<std::endl;
}
void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra beef steak costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}
void  Harl::complain( std::string level)
{
    int levelindex = -1;
    const std::string levels[]= {"DEBUG","INFO" ,"WARNING","ERROR"};

    for (int i = 0; i < 4;i++)
    {
        if (levels[i] == level)
        {
            levelindex = i;
            break;
        }
    }
    switch (levelindex)
    {
        case 0:
            this->debug();
            std::cout << std::endl;
            this->info();
            std::cout << std::endl;
            this->warning();
            std::cout << std::endl;
            this->error();
            break;
        case 1:
            this->info();
            std::cout << std::endl;
            this->warning();
            std::cout << std::endl;
            this->error();
            break;
        case 2:
            this->warning();
            std::cout << std::endl;
            this->error();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    
}