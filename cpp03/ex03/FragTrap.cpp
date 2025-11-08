/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:57:39 by abdo              #+#    #+#             */
/*   Updated: 2025/11/06 15:35:44 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap():ClapTrap()
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const std::string& str):ClapTrap(str)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}
 FragTrap& FragTrap::operator=(const FragTrap& other)
 {
    if (this != &other)
    {
       hit_points = other.hit_points;
       energy_points = other.energy_points;
       attack_damage = other.attack_damage;
    }
    return *this;
 }

 void FragTrap::highFivesGuys()
 {
    std::cout << "High fives guys" << std::endl;
 }

FragTrap::FragTrap(const FragTrap& other):ClapTrap(other)
{
    
}

FragTrap::~FragTrap()
{
}
