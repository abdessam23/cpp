/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:34:17 by abdo              #+#    #+#             */
/*   Updated: 2025/09/29 12:19:22 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};

ScavTrap::ScavTrap(std::string str)
{
    name = str;
    hit_point = 100;
    energy_point = 50;
    attack_damage = 20;
    std::cout << "The ScavTrap " << name << " is called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    
}

void ScavTrap::guardGate()
{
    std::cout << "the scavtrap " 
              << name
              << " in Gate keeper mode" << std::endl;
}
