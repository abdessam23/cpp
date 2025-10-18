/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:42:07 by abdo              #+#    #+#             */
/*   Updated: 2025/09/27 16:02:50 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Alex");
    ClapTrap enemy("Bob");

    robot.attack("Bob"); 
    enemy.TakeDamage(3); 
    enemy.beRepaired(5); 
    for (int i = 0; i < 11; i++)
        robot.attack("Bob");
    enemy.TakeDamage(20);
    enemy.attack("Alex");    
    enemy.beRepaired(5);  
    return 0;
}
