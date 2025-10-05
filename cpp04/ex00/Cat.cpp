/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:15 by abdo              #+#    #+#             */
/*   Updated: 2025/10/05 17:54:42 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
     std::cout << "The Cat  constractor is called!"<< std::endl;
}

Cat::~Cat()
{
     std::cout << "The Cat Destractor is called!"<< std::endl;
}

void Cat::makeSound()
{
        std::cout << "Meow!"<< std::endl;
}