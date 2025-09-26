/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:58:40 by abdo              #+#    #+#             */
/*   Updated: 2025/09/26 15:41:20 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name),hit_point(10),energy_point(10),attack_damage(0)
{
    std::cout << "Constractor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destractor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap "<< name  << "attacks "<<  target << ", causing" << attack_damage << "points of damage!" << std::endl;
}

void ClapTrap::TakeDamage(unsigned int ammount)
{
    if (hit_point > 0 && hit_point >= ammount)
    {
        hit_point -= ammount;
    }
    std::cout << "ClapTrap takes damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int ammount)
{
    if (energy_point > 0 )
    {
        hit_point += ammount;
        energy_point--;
    }
    std::cout << "ClapTrap repaired his hit point!" << std::endl;
}