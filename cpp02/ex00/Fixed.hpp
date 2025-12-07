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
        const int getRawBits() const;
        void setRawBits(const int raw);
};