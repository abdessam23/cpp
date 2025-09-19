/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:02:08 by abdo              #+#    #+#             */
/*   Updated: 2025/09/19 10:40:52 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): f(0){
}
Fixed::Fixed(const int n){
     f = n << fraction;
}
Fixed::Fixed(const float b){
     f = roundf(b * (1 << fraction));
 }
Fixed::Fixed(const Fixed& a): f(a.f){
    //  f = a.getRawBits();
}
Fixed::~Fixed()
{
}
int Fixed::getRawBits() const{
    return f;
}
Fixed& Fixed::operator=(const Fixed& other){
    if (this != &other)
    {
        this->f = other.getRawBits();
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

bool operator==(const Fixed& c1, const Fixed& c2)
{
    return (c1.getRawBits() == c2.getRawBits());
}
    
bool operator!=(const Fixed& c1, const Fixed& c2)
{
    return (c1.getRawBits() != c2.getRawBits());
}

bool operator>(const Fixed& c1, const Fixed& c2)
{
    return (c1.getRawBits() > c2.getRawBits());
}
    
bool operator<(const Fixed& c1, const Fixed& c2)
{
    return (c1.getRawBits() < c2.getRawBits());
}
    
bool operator>=(const Fixed& c1, const Fixed& c2)
{
    return (c1.getRawBits() >= c2.getRawBits());
}   
bool operator<=(const Fixed& c1, const Fixed& c2)
{
    return (c1.getRawBits() <= c2.getRawBits());
}
Fixed operator+(const Fixed& c1, const Fixed& c2)
{
    return Fixed(c1.toFloat() + c2.toFloat());;
}
Fixed operator-(const Fixed& c1, const Fixed& c2)
{
    Fixed res ;
    res = c1.toFloat() - c2.toFloat();
    return (res);
}
Fixed operator*(const Fixed& c1, const Fixed& c2)
{
    return Fixed(c1.toFloat() * c2.toFloat());
}
Fixed operator/(const Fixed& c1, const Fixed& c2)
{
    if (c2.getRawBits() == 0)
        return Fixed(0);
    return Fixed(c1.toFloat() / c2.toFloat());
}

Fixed& Fixed::operator++()
{
    ++f;
    return (*this);
}
Fixed& Fixed::operator--()
{
    --f;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++(*this);
    return tmp;
}
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --(*this);
    return tmp;
}


Fixed& Fixed::min(Fixed& c1, Fixed& c2)
{
    if (c1.getRawBits() < c2.getRawBits())
        return c1;
    return c2;
}
const Fixed& Fixed::min(const Fixed& c1, const Fixed& c2)
{
    if (c1.getRawBits() < c2.getRawBits())
        return c1;
    return c2;
}
Fixed& Fixed::max(Fixed& c1, Fixed& c2)
{
    if (c1.getRawBits() > c2.getRawBits())
        return c1;
    return c2;
}
const Fixed& Fixed::max(const Fixed& c1,const Fixed& c2)
{
    if (c1.getRawBits() > c2.getRawBits())
        return c1;
    return c2;
}