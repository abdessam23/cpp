/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:30:37 by abdo              #+#    #+#             */
/*   Updated: 2025/10/28 16:28:27 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const  y;
public:
    Point();
    Point(const float x, const float y);
    Point(Point& p);
    Point& operator=(Point& a);
    ~Point();
    // const Fixed& getX() const;
    // const Fixed& getY() const;
    // void setX(const Fixed a);
    // void setY(const Fixed b);
};

Point::Point(): x(0),y(0)
{
}
Point::Point(const float x, const float y):x(x),y(y)
{
}
Point::Point(Point& p)
{
    *this = p;
}
Point& Point::operator=(const Point& a)
{
    if (this != &a)
        this->x = a.x;
}

// const Fixed& Point::getX() const
// {
//     return x;
// }
// const Fixed& Point::getY() const
// {
//     return y;
// }
// void Point::setX(Fixed a)
// {
//     x = a;
// }
// void Point::setY(Fixed b)
// {
//    y = b;
// }
Point::~Point()
{
}
