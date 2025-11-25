/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:34:55 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:20:35 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0 || name.empty())
        return NULL;

    Zombie* ptr = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        ptr[i].SetName(name);
        i++;
    }
    return ptr;
}