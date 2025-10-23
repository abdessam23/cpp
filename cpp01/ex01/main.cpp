/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:50:49 by abdo              #+#    #+#             */
/*   Updated: 2025/10/21 18:21:27 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* p;
    int N = 0;
    p = zombieHorde(N,"hello");
    if (!p)
        return 1;
    for(int i = 0; i < N; i++)
    {
        p[i].announce();
    }
    
    delete[] p;
    return 0;
}