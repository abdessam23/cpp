/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:34:55 by abdo              #+#    #+#             */
/*   Updated: 2025/10/21 18:24:19 by abhimi           ###   ########.fr       */
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