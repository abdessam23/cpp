#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int n;
        float f;
        static const int fraction = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float a);
        Fixed(const Fixed& a);
        Fixed& operator=(const Fixed& other);
        friend std::ostream& operator<<(std::ostream &out, Fixed& a);

        float toFloat(void) const;
        int toInt( void ) const;
        ~Fixed();
};