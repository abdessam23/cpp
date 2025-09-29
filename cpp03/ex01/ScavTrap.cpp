/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:33:59 by abdo              #+#    #+#             */
/*   Updated: 2025/09/29 14:15:09 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    name = str;
    hit_point = 100;
    energy_point = 50;
    attack_damage = 20;
    std::cout << "The ScavTrap constructor " << name << " is called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The scavtrap destructor " << name  << " is called!"<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "the scavtrap " 
              << name
              << " in Gate keeper mode" << std::endl;
}