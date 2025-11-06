/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:10:15 by abdo              #+#    #+#             */
/*   Updated: 2025/11/06 18:05:04 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const std::string str):ClapTrap("_" + str)
{
    name = str;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "Diamond " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap(other),FragTrap(other),ScavTrap(other)
{
    *this = other;
    std::cout << "Diamond " << name << " copied" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    return *this;
}
void DiamondTrap::attack(const std::string& target)
{
    std::cout << "Diamond " << name << " attack " << target << std::endl;
}
void DiamondTrap::WhoIam()
{
    std::cout << "Diamond my name is : " << name << " ,Claptrap  my name is : " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
}