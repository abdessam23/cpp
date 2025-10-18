/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:44:39 by abdo              #+#    #+#             */
/*   Updated: 2025/09/20 09:41:53 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed sign(Point const& c1,Point const&  c2, Point const& c3)
{
    return ((c1.getx() - c3.getx()) * (c2.gety() - c3.gety()) - (c2.getx() - c3.getx()) * (c1.gety() - c3.gety()));
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed f1,f2,f3;
    bool has_neg, has_pos;
    
    f1 = sign(point, a, b);
    f2 = sign(point, b, c);
    f3 = sign(point, c, a);

    has_neg = (f1 < 0) || (f2 < 0) || (f3 < 0);
    has_pos = (f1 > 0) || (f2 > 0) || (f3 < 0);
    std::cout << "neg : "<< has_neg << std::endl;
    std::cout << "pos : " << has_pos << std::endl;
    
    return !(has_pos && has_neg);
}