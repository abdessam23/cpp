/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:10:13 by abdo              #+#    #+#             */
/*   Updated: 2025/09/14 18:49:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Harl
{
    void debug();
    void info();
    void warning();
    void error();
    public:
        void complain( std::string level );
    
};

void Harl::debug()
{
    std::cout << "I love having extra beef steak for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<std::endl;
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra beef steak costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}
void Harl::complain( std::string level)
{
    std::string levels[]= {"DEBUG","INFO" ,"WARNING","ERROR"};
    void (Harl::*f[])() = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4;i++)
    {
        if (levels[i] == level)
        {
            (this->*f[i])();
            return;
        }
    }
    std::cout << "nothing " << std::endl;
}

=======
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:36:41 by abdo              #+#    #+#             */
/*   Updated: 2025/10/22 10:36:42 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
>>>>>>> master

int main()
{
    Harl a;
    a.complain("DEBUG");
    a.complain("INFO");
    a.complain("WARNING");
    a.complain("ERROR");
<<<<<<< HEAD
}
=======
    a.complain("nolog");
    a.complain("");
}
>>>>>>> master
