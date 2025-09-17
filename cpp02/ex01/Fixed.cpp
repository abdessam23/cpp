/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:02:08 by abdo              #+#    #+#             */
/*   Updated: 2025/09/17 19:15:16 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int n){
     std::cout << "Int constructor called" << std::endl;
     f = n << fraction;
}
Fixed::Fixed(const float b){
     std::cout << "Float constructor called" << std::endl;
     f = b/(1<<fraction);
 }
Fixed::Fixed(const Fixed& a){
     std::cout << "Copy constructor called" << std::endl;
     n = a.n;
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
        this->n = other.n;
    }
    return *this;
}

std::ostream& operator<<(std::ostream &out, Fixed& obj)
{
    out << obj.f;
    // out << obj.n;
    return out;
}

float Fixed::toFloat( void ) const
{
    float p;
    p = n << fraction;
    return p;
}
int Fixed::toInt( void ) const
{
     int b;
     b = roundf(f);
     return b;   
}

