/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:16:38 by abdo              #+#    #+#             */
/*   Updated: 2025/10/29 14:26:03 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main(void) 
{
    Point a(1.2f,2.0f);
    Point b(4.2f,3.0f);
    Point c(3.2f,5.0f);
    Point p(3.72, 4.3);
    if (bsp(a,b,c,p) == false)
        std::cout << "False" << std::endl;
    else 
        std::cout << "True" << std::endl;

return 0;
}

