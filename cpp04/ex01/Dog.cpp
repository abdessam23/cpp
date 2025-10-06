/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:39:57 by abdo              #+#    #+#             */
/*   Updated: 2025/10/06 14:33:56 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    p = new Brain();
    std::cout << "The Dog constractor is called!"<< std::endl;
}

Dog::~Dog()
{
     delete p;
     std::cout << "The Dog Destractor is called!"<< std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!Woof!"<< std::endl;
}

