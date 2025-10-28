/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:30:37 by abdo              #+#    #+#             */
/*   Updated: 2025/10/28 18:09:11 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0),y(0)
{
}
Point::Point(const float x, const float y):x(x),y(y)
{
}
Point::Point(const Point& p)
{
   if (this != &p)
    {
        this->x = p.x;
        this->y = p.y;
    }
}
Point Point::operator=(const Point& a)
{
    if (this != &a)
    {
        this->x = a.x;
        this->y = a.y;
    }
    return *this;
}

Fixed Point::getX() const
{
    return x;
}
Fixed Point::getY() const
{
    return y;
}
void Point::setX(Fixed a)
{
    x = a;
}
void Point::setY(Fixed b)
{
   y = b;
}
Point::~Point()
{
}
