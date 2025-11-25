/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:15 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 17:36:03 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/10 17:26:11 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    std::cout << "The Cat  constractor is called!"<< std::endl;
}
<<<<<<< HEAD

Cat::~Cat()
{
     std::cout << "The Cat Destractor is called!"<< std::endl;
=======
Cat::Cat(const Cat& other):Animal(other)
{
    *this = other;
    std:: cout << "Copy constructor of Cat " << type << " called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        type = other.type;
    }
     std:: cout << "Copy assignment OP of Cat " << type << " called" << std::endl;
    return *this;
}
Cat::~Cat()
{
     std::cout << "The Cat Destructor is called!"<< std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
>>>>>>> master
}
