/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:48:38 by abdo              #+#    #+#             */
/*   Updated: 2025/10/01 17:10:57 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string str): ClapTrap(str + "_clap_name"),FragTrap(str),ScavTrap(str), name(str)
{
    hit_point = 100;
    energy_point = 50;
    attack_damage= 30;
    std::cout << "the Diamondtrap constructor " << name << " is called" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "The DiamondTrap " << name << " ClapTrap  " << ClapTrap::name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "The diamondtrap destructor " << name << " is called!" << std::endl;
}