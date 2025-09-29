/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:58:40 by abdo              #+#    #+#             */
/*   Updated: 2025/09/29 14:09:39 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name),hit_point(10),energy_point(10),attack_damage(0)
{
    std::cout << "ClapTrap " << name << " Constructor called!" << std::endl;
}



ClapTrap::~ClapTrap()
{
     std::cout << "ClapTrap " << name << " Destructor called!" << std::endl;
}



void ClapTrap::attack(const std::string& target)
{
    if (hit_point == 0 || energy_point == 0)
    {
          std::cout << "ClapTrap " << name
                  << " cannot attack (no Hit point or energy)!" << std::endl;
        return;
    }
    energy_point--;
    std::cout << "ClapTrap "
              << name  
              << " attacks "
              << target 
              << ", causing " << attack_damage << " points of damage!" << " (energy point left "<< energy_point <<" )" << std::endl;
}



void ClapTrap::TakeDamage(unsigned int amount)
{
     if (hit_point == 0)
    {
        std::cout << "ClapTrap " << name 
                  << " is already died" << std::endl;
        return;
    }
    if (hit_point > amount)     
        hit_point -= amount;
    else
        hit_point = 0;
    std::cout << "ClapTrap takes damage! "<< "hit_point: "<< hit_point << " damage: "<< amount  << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
     if (hit_point == 0 || energy_point == 0)
    {
        std::cout << "ClapTrap " << name 
                  << " cannot repaired  no hit point or energy" << std::endl;
        return;
    }
  
    hit_point += amount;
    energy_point--;
    std::cout << "ClapTrap repaired his hit point! " << "hit_point: "<< hit_point << " energy : "<< energy_point  << std::endl;
}