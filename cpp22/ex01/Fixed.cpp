/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:42:53 by abdo              #+#    #+#             */
/*   Updated: 2025/10/24 18:35:31 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int n): f(n)
{
}
Fixed::Fixed(Fixed& a)
{
    *this = a;
}
Fixed& Fixed::operator=(const Fixed& a)
{
    this->f = a.f;
}

Fixed::~Fixed()
{
}
