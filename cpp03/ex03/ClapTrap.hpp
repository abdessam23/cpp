/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:47:33 by abdo              #+#    #+#             */
/*   Updated: 2025/10/01 17:07:01 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int hit_point;
    unsigned int energy_point;
    unsigned int attack_damage;
    
public:
    ClapTrap(std::string str);
    ~ClapTrap();

    void attack(const std::string& target);
    void TakeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


