/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:03:13 by abdo              #+#    #+#             */
/*   Updated: 2025/10/18 17:37:29 by abdo             ###   ########.fr       */
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
    const std::string levels[]= {"DEBUG","INFO" ,"WARNING","ERROR"};
    
    void (Harl::*f[])() = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4;i++)
    {
        if (levels[i] == level)
        {
            while (i < 4)
            {
               (this->*f[i])();
               std::cout << std::endl;
               i++;
            }
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}