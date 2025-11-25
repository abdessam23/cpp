/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:39:57 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 17:35:30 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/10 17:26:04 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
<<<<<<< HEAD
    std::cout << "The Dog constractor is called!"<< std::endl;
}

Dog::~Dog()
{
     std::cout << "The Dog Destractor is called!"<< std::endl;
=======
    std::cout << "The Dog  constractor is called!"<< std::endl;
}
Dog::Dog(const Dog& other):Animal(other)
{
    *this = other;
    std:: cout << "Copy constructor of Dog " << type << " called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        type = other.type;
    }
     std:: cout << "Copy assignment OP of Dog " << type << " called" << std::endl;
    return *this;
}
Dog::~Dog()
{
     std::cout << "The Dog Destructor is called!"<< std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
>>>>>>> master
}


