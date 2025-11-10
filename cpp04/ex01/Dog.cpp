/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:39:57 by abdo              #+#    #+#             */
/*   Updated: 2025/11/10 16:08:56 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():p(new Brain())
{
    type = "Dog";
    std::cout << "The Dog  constractor is called!"<< std::endl;
}
Dog::Dog(const Dog& other):Animal(other)
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
     std::cout << "The Dog Destractor is called!"<< std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}


