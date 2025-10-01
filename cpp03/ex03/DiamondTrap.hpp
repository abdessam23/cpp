/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:02:50 by abdo              #+#    #+#             */
/*   Updated: 2025/10/01 17:07:10 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap,public ScavTrap
{
private:
   std::string name;
public:
    DiamondTrap(std::string str);
    ~DiamondTrap();
    void whoAmI();
};


