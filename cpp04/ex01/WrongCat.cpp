/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:01:04 by abdo              #+#    #+#             */
/*   Updated: 2025/11/10 17:32:42 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat():p(new Brain())
{
    type = "WrongCat";
    std::cout << "The WrongCat  constractor is called!"<< std::endl;
}
WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other)
{
    this->type = other.type;
    this->p = new Brain(*other.p);
    std:: cout << "Copy constructor of WrongCat " << type << " called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        delete p;
        type = other.type;
        p = new Brain(*other.p);
    }
     std:: cout << "Copy assignment OP of WrongCat " << type << " called" << std::endl;
    return *this;
}
WrongCat::~WrongCat()
{
     delete p;
     std::cout << "The WrongCat Destructor is called!"<< std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}