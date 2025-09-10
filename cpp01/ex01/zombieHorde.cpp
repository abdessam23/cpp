/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:47:24 by abdo              #+#    #+#             */
/*   Updated: 2025/09/10 18:03:59 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*  zombieHorde(int N, std::string name)
{
    Zombie* p = new Zombie(N);
    for (int i = 0; i < N; i++)
    {
        p[i].name = name;
    }
    return p;
}