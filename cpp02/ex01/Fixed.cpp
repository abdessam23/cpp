/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:02:08 by abdo              #+#    #+#             */
/*   Updated: 2025/09/18 15:45:17 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): f(0){
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int n){
     std::cout << "Int constructor called" << std::endl;
     f = n << fraction;
}
Fixed::Fixed(const float b){
     std::cout << "Float constructor called" << std::endl;
     f = roundf(b * (1 << fraction));
 }
Fixed::Fixed(const Fixed& a){
     std::cout << "Copy constructor called" << std::endl;
     f = a.f;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->f = other.f;
    }
    return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}

float Fixed::toFloat( void ) const
{
    return (float)f / (1 << fraction);
}
int Fixed::toInt( void ) const
{
    return f >> fraction;  
}

