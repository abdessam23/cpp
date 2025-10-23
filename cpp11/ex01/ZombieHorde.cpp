/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:34:55 by abdo              #+#    #+#             */
/*   Updated: 2025/10/21 09:18:33 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* ptr = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        ptr[i].SetName(name);
        i++;
    }
    return ptr;
}