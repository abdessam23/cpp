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
        const Fixed& operator=(const Fixed& a);
        ~Fixed();
        Fixed(const int n);
        Fixed(const float nb);
        bool operator<(const Fixed& a) const;
        bool operator>(const Fixed& a) const;

        bool operator<=(const Fixed& a) const;
        bool operator>=(const Fixed& a) const;

        bool operator==(const Fixed& a);
        bool operator!=(const Fixed& a);

        Fixed operator+(const Fixed& a);
        Fixed operator-(const Fixed& a);

        Fixed operator*(const Fixed& a);
        Fixed operator/(const Fixed& a);

        Fixed& operator++() ;
        Fixed& operator--();

        Fixed operator++(int);
        Fixed  operator--(int);

        int getRawBits() const;
        void setRawBits(const int raw);
        float toFloat() const;
        int toInt() const;
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a,const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a,const Fixed& b);
};

std::ostream& operator<<(std::ostream& in, const Fixed& a);