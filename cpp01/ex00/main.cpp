/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:04:30 by abdo              #+#    #+#             */
/*   Updated: 2025/09/10 16:05:01 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie stackzombie("himi");
    stackzombie.announce();
    stackzombie.randomChump("abdo this rundom!");
    Zombie* heapzombie = newZombie("abdessamad");
    heapzombie->announce();
    heapzombie->randomChump("google");
    
    delete heapzombie;
}