/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:42:53 by abdo              #+#    #+#             */
/*   Updated: 2025/10/30 16:21:19 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): f(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed& a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
   
}
Fixed& Fixed::operator=(const Fixed& a)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->f = a.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called!" << std::endl;
}

const int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called!" << std::endl;
    return f;
}
void Fixed::setRawBits(const int raw)
{
    std::cout  << "setRawBits member function called!" << std::endl;
    f = raw;
}

