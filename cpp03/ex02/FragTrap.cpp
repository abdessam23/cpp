/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:25:28 by abdo              #+#    #+#             */
/*   Updated: 2025/09/29 13:42:30 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str)
{
    name = str;
    hit_point = 100;
    energy_point = 100;
    attack_damage = 30;
    std::cout << "The fragtrap constructor " << name << "  is called!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "The fragtrap destructor " << name << " is called!"<< std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "I don't know what does it mean " << std::endl;
}