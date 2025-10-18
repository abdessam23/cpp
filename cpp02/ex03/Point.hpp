/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:06:19 by abdo              #+#    #+#             */
/*   Updated: 2025/09/19 17:24:44 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
   Fixed x;
   Fixed y;
public:
    Point();
    Point(float x, float y);
    Point(Point& a);
    Point& operator=(const Point& other);
    ~Point();

    Fixed getx() const;
    Fixed gety() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

