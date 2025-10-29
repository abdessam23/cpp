/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:30:58 by abdo              #+#    #+#             */
/*   Updated: 2025/10/29 16:20:55 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed calc_area(Point const a, Point const b, Point const c)
{
    Fixed area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * ( a.getY() - b.getY());
    if (area < 0)
        area = area * Fixed(-1.0f);
    return area * Fixed(0.5f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed t1 = calc_area(a,b,point);
    Fixed t2 = calc_area(a,c,point);
    Fixed t3 = calc_area(c,b,point);
    Fixed t4 = calc_area(a,b,c);
    
    Fixed t5 = t1 + t2 + t3;
   
    if (abs((t5 - t4).toFloat()) <= 0.01)
    {
        return true;
    }
    return false;
}


