/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:12 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 17:29:40 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/10 17:26:17 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal():type(" ")
{
    std::cout << "The animal constractor is called!"<< std::endl;
}
<<<<<<< HEAD
=======
Animal::Animal(const Animal& other):type(other.type)
{
    std:: cout << "Copy constructor of animal " << type << " called" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std:: cout << "Copy assignment OP of animal " << type << " called" << std::endl;
    return *this;
}

>>>>>>> master
std::string Animal::getType() const
{
    return type;
}
void Animal::makeSound() const
{
<<<<<<< HEAD
    if (type == "Dog")
        std::cout << "Woof!Woof!"<< std::endl;
    else if (type == "Cat")
        std::cout << "Meow!"<< std::endl;
    else
        std::cout << " "<< std::endl;
=======
    std::cout << "Animal unknown sound!"<< std::endl;
>>>>>>> master
}

Animal::~Animal()
{
<<<<<<< HEAD
    std::cout << "The animal destractor is called!"<< std::endl;
=======
    std::cout << "The animal destructor is called!"<< std::endl;
>>>>>>> master
}