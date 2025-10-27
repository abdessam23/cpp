/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:42:53 by abdo              #+#    #+#             */
/*   Updated: 2025/10/27 15:11:04 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): f(0)
{
    // std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& a)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = a;
}
Fixed& Fixed::Fixed::operator=(const Fixed& a)
{
    // std::cout << "Copy assignement Fixed::operator called" << std::endl;
    this->f = a.f;
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called!" << std::endl;
}

Fixed::Fixed(const int n)
{
    // std::cout << "Int constructor called" << std::endl;
    f =n <<fraction;
}
Fixed::Fixed(const float nb)
{
    // std::cout << "Float constructor called" << std::endl;
    f =(double)round(nb * (1<<fraction));
}

int Fixed::getRawBits() const
{
    return f;
}

void Fixed::setRawBits(const int raw)
{
    f = raw;
}

std::ostream& operator<<(std::ostream& in,const  Fixed& a)
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

bool Fixed::operator<(const Fixed& a) const
{
    return (this->toFloat() < a.toFloat());
}

bool Fixed::operator>(const Fixed& a) const
{
    return (this->toFloat() > a.toFloat());
}

bool Fixed::operator<=(const Fixed& a) const
{
    return (this->toFloat() <= a.toFloat());
}

bool Fixed::operator>=(const Fixed& a) const
{
    return (this->toFloat()  >= a.toFloat());
}

bool Fixed::operator==(const Fixed& a)
{
    return (this->toFloat() == a.toFloat());
}

bool Fixed::operator!=(const Fixed& a)
{
    return (this->toFloat() != a.toFloat());
}

Fixed Fixed::operator+(const Fixed& a)
{
    return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed& a)
{
    return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed& a)
{
    return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed& a)
{
    if (a.toFloat() == 0)
        return *this;
    return Fixed(this->toFloat() / a.toFloat());
}

Fixed&  Fixed::operator++()
{
    ++f;
    return *this;
}

Fixed& Fixed::operator--()
{
    --f;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++f;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --f;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a <= b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a,const Fixed& b)
{
    
    if (a <= b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a >= b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a,const Fixed& b)
{
    if (a >= b)
         return a;
    return b;
}