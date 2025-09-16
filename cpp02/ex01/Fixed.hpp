#pragma once

#include <iostream>

class Fixed
{
private:
    int f;
    static const int fraction = 8;
public:
    Fixed();
    Fixed(const int n);
    Fixed(const float a);
    Fixed(Fixed& a);
    Fixed& operator=(Fixed& other);
    int getRawBits() const;
    void setRawBits(int const raw);
    ~Fixed();
};