/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:11:35 by abdo              #+#    #+#             */
/*   Updated: 2025/11/05 15:35:32 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::string getName(){ return name;};
}


