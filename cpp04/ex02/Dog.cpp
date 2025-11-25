/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:39:57 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 14:33:56 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/12 15:30:31 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

<<<<<<< HEAD
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

=======
Dog::Dog():p(new Brain())
{
    type = "Dog";
    std::cout << "The Dog  constractor is called!"<< std::endl;
}
Dog::Dog(const Dog& other):AAnimal(other)
{
    this->type = other.type;
    this->p = new Brain(*other.p);
    std:: cout << "Copy constructor of Dog " << type << " called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        delete p;
        type = other.type;
        p = new Brain(*other.p);
    }
     std:: cout << "Copy assignment OP of Dog " << type << " called" << std::endl;
    return *this;
}
Dog::~Dog()
{
     delete p;
     std::cout << "The Dog Destructor is called!"<< std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}


>>>>>>> master
