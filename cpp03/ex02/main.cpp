/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:42:07 by abdo              #+#    #+#             */
/*   Updated: 2025/09/29 13:41:27 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap robot("Alex");
    FragTrap enemy("Bob");

    robot.attack("Bob"); 
    enemy.TakeDamage(3); 
    enemy.beRepaired(5); 
    for (int i = 0; i < 11; i++)
        robot.attack("Bob");
    enemy.TakeDamage(20);
    enemy.attack("Alex");    
    enemy.beRepaired(5);  
    robot.highFivesGuys();
    return 0;
}
