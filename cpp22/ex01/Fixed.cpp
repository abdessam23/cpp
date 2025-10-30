/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:42:53 by abdo              #+#    #+#             */
/*   Updated: 2025/10/30 16:05:33 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): f(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}
Fixed& Fixed::operator=(const Fixed& a)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->f = a.f;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called!" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    f =n <<fraction;
}
Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    f =(double)round(nb * (1<<fraction));
}

const int Fixed::getRawBits() const
{
    return f;
}
void Fixed::setRawBits(const int raw)
{
    f = raw;
}
std::ostream& operator<<(std::ostream& in,const Fixed& a)
{
        in << a.toFloat() ;
        return in;
} 

float Fixed::toFloat() const 
{
    return ((double)f /(double) (1<<fraction));
}
int Fixed::toInt() const
{
    return ((int) f >>fraction);
}

