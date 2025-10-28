/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:23:49 by abdo              #+#    #+#             */
/*   Updated: 2025/10/28 18:03:01 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point& p);
    Point operator=(const Point& a);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
    void setX(const Fixed a);
    void setY(const Fixed b);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);