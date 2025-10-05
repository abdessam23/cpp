/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:39:57 by abdo              #+#    #+#             */
/*   Updated: 2025/10/05 17:54:13 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "The Dog constractor is called!"<< std::endl;
}

Dog::~Dog()
{
     std::cout << "The Dog Destractor is called!"<< std::endl;
}

void Dog::makeSound()
{
    std::cout << "Woof!Woof!"<< std::endl;
}

