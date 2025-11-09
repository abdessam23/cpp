/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:01:04 by abdo              #+#    #+#             */
/*   Updated: 2025/11/09 16:06:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "The WrongCat  constractor is called!"<< std::endl;
}
WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other)
{
    *this = other;
    std:: cout << "Copy constructor of WrongCat " << type << " called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        type = other.type;
    }
     std:: cout << "Copy assignment OP of WrongCat " << type << " called" << std::endl;
    return *this;
}
WrongCat::~WrongCat()
{
     std::cout << "The WrongCat Destractor is called!"<< std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
