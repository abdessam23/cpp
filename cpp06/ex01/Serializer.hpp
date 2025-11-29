/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:49:25 by abdo              #+#    #+#             */
/*   Updated: 2025/11/29 11:59:14 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include  <cstdint>

class Serializer
{
private:
    Serializer();
public:
    static uintptr_t serialize(void* ptr);
    static void* deserialize(uintptr_t raw);
    ~Serializer();
};

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}
