/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:30:37 by abdo              #+#    #+#             */
/*   Updated: 2025/10/29 15:06:17 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0),y(0)
{
}
Point::Point(const float x, const float y):x(x),y(y)
{
}
Point::Point(const Point& p):x(p.x),y(p.y)
{
}
Point Point::operator=(const Point& )
{
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
Point::~Point()
{
}
