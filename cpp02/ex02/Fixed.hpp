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
        Fixed(const int n);

        Fixed(const float a);
        Fixed(const Fixed& a);
        int getRawBits() const;
        static Fixed& min(Fixed& c1, Fixed& c2);
        static const Fixed& min(const Fixed& c1, const Fixed& c2);
        static Fixed& max(Fixed& c1, Fixed& c2);
        static const Fixed& max(const Fixed& c1,const Fixed& c2);

        Fixed& operator=(const Fixed& other);
        Fixed& operator++();
        Fixed& operator--();
        Fixed& operator++(int);
        Fixed& operator--(int);
        friend std::ostream& operator<<(std::ostream &out, const Fixed& obj);

        friend bool operator==(const Fixed& c1, const Fixed& c2);
        friend bool operator!=(const Fixed& c1, const Fixed& c2);

        friend bool operator>(const Fixed& c1, const Fixed& c2);
        friend bool operator<(const Fixed& c1, const Fixed& c2);

        friend bool operator>=(const Fixed& c1, const Fixed& c2);
        friend bool operator<=(const Fixed& c1, const Fixed& c2);

        friend Fixed operator+(const Fixed& c1, const Fixed& c2);
        friend Fixed operator-(const Fixed& c1, const Fixed& c2);

        friend Fixed operator*(const Fixed& c1, const Fixed& c2);
        friend Fixed operator/(const Fixed& c1, const Fixed& c2);

        float toFloat(void) const;
        int toInt( void ) const;
        ~Fixed();
};