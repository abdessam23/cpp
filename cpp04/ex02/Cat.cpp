/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:15 by abdo              #+#    #+#             */
/*   Updated: 2025/10/06 14:33:39 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    p = new Brain();
    std::cout << "The Cat  constractor is called!"<< std::endl;
}

Cat::~Cat()
{
     delete p;
     std::cout << "The Cat Destractor is called!"<< std::endl;
}

void Cat::makeSound() const
{
        std::cout << "Meow!"<< std::endl;
}