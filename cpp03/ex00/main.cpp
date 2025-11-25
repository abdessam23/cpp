/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/03 12:31:50 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"


int main()
{
    ClapTrap alex("alex");
    ClapTrap bob("bob");
    ClapTrap pp;
    pp.attack("joj");
    alex.attack("bob");
    bob.takeDamage(2);
    alex.beRepaired(3);
    
    
}