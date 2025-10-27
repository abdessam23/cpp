/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:16:38 by abdo              #+#    #+#             */
/*   Updated: 2025/10/27 14:47:56 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(void) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed(2) );
    std::cout << a <<std::endl;
    std::cout << ++a <<std::endl;
    std::cout << a <<std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}

