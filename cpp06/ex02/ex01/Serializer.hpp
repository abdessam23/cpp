/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:49:25 by abdo              #+#    #+#             */
/*   Updated: 2026/01/01 11:27:39 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_H
#define SERIALIZER_H
#include <iostream>
#include <stdint.h>
#include <string>
#include "Data.hpp"

class Serializer
{
private:
    Serializer();
    Serializer(const Serializer&);
    Serializer& operator=(const Serializer&);
    ~Serializer();
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif