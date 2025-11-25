/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:26:20 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:27:55 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("bot"),hit_points(10),energy_points(10),attack_damage(0)
{
    std::cout << "Default constructor of "<<  name << "  called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
     std::cout << "Copy constructor of "<<  name << "  called." << std::endl;
    *this = other;
}
ClapTrap::ClapTrap(std::string str):name(str),hit_points(10),energy_points(10),attack_damage(0)
{
     std::cout << "Parameterized constructor of "<<  name << " called." << std::endl;
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
    std::cout << "Copy assignement OP of  Claptrap " << name << " is called" <<std::endl; 
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of " <<  name << " called." <<std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (hit_points == 0 || energy_points == 0)
    {
          std::cout << "ClapTrap " << name
                  << " cannot attack (no Hit point or energy)!" << std::endl;
        return;
    }

    energy_points--;
    std::cout << "ClapTrap "
              << name  
              << " attacks "
              << target 
              << ", causing " << attack_damage << " points of damage!" << " (energy point left "<< energy_points <<" )" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
     if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " is already died" << std::endl;
        return;
    }
    if (hit_points > amount)     
        hit_points -= amount;
    else
        hit_points = 0;
    std::cout << "ClapTrap takes damage! "<< "hit_point: "<< hit_points << " damage: "<< amount  << std::endl;
}



void ClapTrap::beRepaired(unsigned int amount)
{

     if (hit_points == 0 || energy_points == 0)
    {
        std::cout << "ClapTrap " << name 
                  << " cannot repaired  no hit point or energy" << std::endl;
        return;
    }
  
    hit_points += amount;
    energy_points--;
    std::cout << "ClapTrap repaired his hit point! " << "hit_point: "<< hit_points << " energy : "<< energy_points  << std::endl;
    
}