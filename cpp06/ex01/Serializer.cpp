/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:35:26 by abdo              #+#    #+#             */
/*   Updated: 2025/11/29 15:41:38 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"



Serializer::Serializer()
{
}
uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}


Data* Serializer::deserialize(uintptr_t raw)
{
    Data* p = reinterpret_cast<Data*>(&raw);
    return p;
}

Serializer::~Serializer()
{
}