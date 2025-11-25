/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:15 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 14:33:39 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/12 15:30:41 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


<<<<<<< HEAD
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
=======
Cat::Cat():p(new Brain())
{
    type = "Cat";
    std::cout << "The Cat  constractor is called!"<< std::endl;
}
Cat::Cat(const Cat& other):AAnimal(other)
{
    this->type = other.type;
    this->p = new Brain(*other.p);
    std:: cout << "Copy constructor of Cat " << type << " called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        delete p;
        type = other.type;
        p = new Brain(*other.p);
    }
     std:: cout << "Copy assignment OP of Cat " << type << " called" << std::endl;
    return *this;
}
Cat::~Cat()
{
     delete p;
     std::cout << "The Cat Destructor is called!"<< std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

>>>>>>> master
