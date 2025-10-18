/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:06:05 by abdo              #+#    #+#             */
/*   Updated: 2025/09/19 16:36:28 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0){}

Point::Point(float c, float b): x(c),y(b){}

Point::Point(Point& a):x(a.x),y(a.y){}

Point& Point::operator=(const Point& other)
{
    if (this != &other)
    {
        this->x = other.getx();
        this->y = other.gety();
    }
    return (*this);
}

Point::~Point(){}

Fixed Point::getx() const
{
    return x;
}
Fixed Point::gety() const
{
    return y;
}
