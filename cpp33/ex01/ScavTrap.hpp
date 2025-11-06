/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:11:35 by abdo              #+#    #+#             */
/*   Updated: 2025/11/06 17:11:55 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    public:
    ScavTrap();
    ScavTrap(const std::string& str);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string& target);
    std::string getName(){ 
        std::cout << "I'm a child man!" << std::endl;
        return name;};
};


