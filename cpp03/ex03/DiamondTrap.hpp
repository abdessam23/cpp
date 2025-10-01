/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:50 by abdo              #+#    #+#             */
/*   Updated: 2025/10/01 15:56:06 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class FragTrap: virtual ClapTrap{};
class ScavTrap: virtual ClapTrap{}; 

class DiamondTrap : public FragTrap,public ScavTrap
{
private:
   std::string name;
public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void whoAmI();
};

DiamondTrap::DiamondTrap(std::string name): FragTrap(name)
{
}
void DiamondTrap::whoAmI()
{
    std::cout << "The DiamondTrap " << name << 
}
DiamondTrap::~DiamondTrap()
{
}
