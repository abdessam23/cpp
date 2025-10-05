/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:15 by abdo              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:35 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    std::cout << "The Cat  constractor is called!"<< std::endl;
}

Cat::~Cat()
{
     std::cout << "The Cat Destractor is called!"<< std::endl;
}

void Cat::makeSound() const
{
        std::cout << "Meow!"<< std::endl;
}