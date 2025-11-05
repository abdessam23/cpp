/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:26:20 by abdo              #+#    #+#             */
/*   Updated: 2025/11/05 15:34:54 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("bot"),hit_points(10),energy_points(10),attack_damage(0)
{
    std::cout << "ClapTrap Default constructor of "<<  name << "  called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
     std::cout << "ClapTrap Copy constructorof "<<  name << "  called." << std::endl;
    *this = other;
}
ClapTrap::ClapTrap(std::string str):name(str),hit_points(10),energy_points(10),attack_damage(0)
{
     std::cout << "ClapTrap Parametrs constructor of "<<  name << " called." << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of " <<  name << " called." <<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        attack_damage++;
        energy_points--;
        std::cout << "ClapTrap " << name << "attacks " << target<< " , causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "Can't attack , it's lose energie  point or already die." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > amount)
    {
        hit_points -= amount;
        std::cout << "ClapTrap " << name << " take damage  , causing " << hit_points << " point of damage!" << std::endl;
    }
    else
    {
        hit_points = 0;
       std::cout << "ClapTrap " << name << " take damage  , causing " << hit_points << " point of damage!" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0 && hit_points > 0)
    {
        hit_points += amount;
        energy_points--;
        std::cout << "ClapTrap " << name << " repaired it self , causing " << energy_points << " point of energy!" << std::endl;
    }
    else 
        std::cout  << "there is no energy_points or already die" << std::endl;
}