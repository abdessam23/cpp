/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:02:08 by abdo              #+#    #+#             */
/*   Updated: 2025/09/15 18:49:43 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

class Fixed
{
private:
    int f;
    static const int fraction = 8;
public:
    Fixed();
    Fixed(Fixed& a);
    Fixed& operator=(Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};

Fixed::Fixed(){
    f = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed& a){
     std::cout << "Copy constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return f;
}
Fixed& Fixed::operator=(Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->f = other.f;
    return *this;
}
void Fixed::setRawBits(int const raw)
{
    f = raw ;
}

int main( void ) {
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}