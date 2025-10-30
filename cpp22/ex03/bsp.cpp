/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:30:58 by abdo              #+#    #+#             */
/*   Updated: 2025/10/30 16:00:28 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed calc_area(Point const a, Point const b, Point const c)
{
    Fixed area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * ( a.getY() - b.getY());
    if (area < Fixed(0))
        area = area * Fixed(-1);
    return area * Fixed(0.5f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed t1 = calc_area(a,b,point);
    Fixed t2 = calc_area(a,c,point);
    Fixed t3 = calc_area(c,b,point);
    Fixed t4 = calc_area(a,b,c);   
    Fixed t5 = t1 + t2 + t3;

    if (t1 == Fixed(0) || t2 == Fixed(0) || t3 == Fixed(0))
        return false;
    if ((t5 - t4) <= Fixed(0.01f))
    {
        return true;
    }
    return false;
}


