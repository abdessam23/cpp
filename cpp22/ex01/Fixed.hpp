/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:33:26 by abdo              #+#    #+#             */
/*   Updated: 2025/10/24 18:35:03 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
class Fixed
{
    private:
    int f;
    static const int fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed& a);
        Fixed& operator=(const Fixed& a);
        ~Fixed();
        Fixed(const int n);
        Fixed(const float nb);
        const int getRawBits() const;
        void setRawBits(const int raw);
        float toFloat() const;
        int toInt() const;
};
std::ostream& operator<<(std::ostream& in,const Fixed& a);