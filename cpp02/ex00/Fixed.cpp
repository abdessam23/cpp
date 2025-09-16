/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:02:08 by abdo              #+#    #+#             */
/*   Updated: 2025/09/16 15:26:34 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): f(0){
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed& a){
     std::cout << "Copy constructor called" << std::endl;
     f = a.getRawBits();
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return f;
}
Fixed& Fixed::operator=(Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->f = other.getRawBits();
    }
    return *this;
}
void Fixed::setRawBits(int const raw)
{
    f = raw ;
}

