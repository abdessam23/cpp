/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:23:49 by abdo              #+#    #+#             */
/*   Updated: 2025/10/31 09:58:09 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point& p);
    Point operator=(Point&);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);