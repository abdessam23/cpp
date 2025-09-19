/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:24:25 by abdo              #+#    #+#             */
/*   Updated: 2025/09/19 18:46:15 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"


int main() 
{
    Point a;
    Point b(a);
    Point c(1.2,3);
    Point v(4.55,5.4545);
    std::cout << a.getx() << std::endl;
    std::cout << a.gety() << std::endl;

    std::cout << b.getx() << std::endl;
    std::cout << b.gety() << std::endl;
    
    std::cout << c.getx() << std::endl;
    std::cout << c.gety() << std::endl;
    if (bsp(a,b,c,v))
        std::cout << "true" <<std::endl;
    else 
         std::cout << "false" <<std::endl;
    return 0;
}