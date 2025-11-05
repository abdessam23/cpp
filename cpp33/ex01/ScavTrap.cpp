/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:28:48 by abdo              #+#    #+#             */
/*   Updated: 2025/11/05 15:29:14 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "Scavtrap " << name <<  " constructor called" <<std::endl;
}
 ScavTrap::ScavTrap(const std::string& str):ClapTrap(str)
 {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "Scavtrap " << name <<  " parameteras constructor called" <<std::endl;
 }
 
ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other)
{
    std::cout << "Scavtrap " << name <<  " copy constructor called" <<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    std::cout << "Scavtrap " << name <<  " copy assignement operator called" <<std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "I am in gate keeper mode." << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    // attack(target);
    std::cout << "ScavTrap" << name << " attack " << target << " causing " << hit_points << " hp  points" << std::endl; 
}

ScavTrap::~ScavTrap()
{
}