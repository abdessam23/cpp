/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:58:40 by abdo              #+#    #+#             */
/*   Updated: 2025/09/26 10:47:06 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name),hit_point(10),energy_point(10),attack_damage(0)
{
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap "<< name  << "attacks "<<  target<< ", causing" << attack_damage << "points of damage!" << std::endl;
}
void ClapTrap::TakeDamage(unsigned int ammount)
{
    
}
void ClapTrap::beRepaired(unsigned int ammount)
{
    
}