/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:50 by abdo              #+#    #+#             */
/*   Updated: 2025/10/01 16:40:23 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class FragTrap: virtual public ClapTrap{};
class ScavTrap: virtual public ClapTrap{}; 

class DiamondTrap : public FragTrap,public ScavTrap
{
private:
   std::string name;
public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void whoAmI();
};

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name),FragTrap(name),name(name)
{
    hit_point = 100;
    energy_point = 50;
    attack_damage= 30;
    std::cout << "the Diamondtrap constructor is called" << name << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "The DiamondTrap " << name << ClapTrap::name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
}
