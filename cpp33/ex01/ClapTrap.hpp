/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:31:24 by abdo              #+#    #+#             */
/*   Updated: 2025/11/04 12:30:20 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


