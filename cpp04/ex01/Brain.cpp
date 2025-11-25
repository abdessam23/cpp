/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:32:30 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 13:32:50 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/10 17:26:58 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
<<<<<<< HEAD
    std::cout << "The brain constractor is called!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "The brain destractor is called!" << std::endl;
=======
    for(int i = 0; i < 100 ;i++)
    {
        ideas[i] = "";
    }
    std::cout << "The brain constructor is called!" << std::endl;
}
Brain::Brain(const Brain& other)
{
    *this = other;
    std::cout << "the brain copy constructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for(int i = 0; i< 100; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}
Brain::~Brain()
{
    std::cout << "The brain destructor is called!" << std::endl;
>>>>>>> master
}