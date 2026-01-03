/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:06:19 by abdo              #+#    #+#             */
/*   Updated: 2026/01/01 11:16:11 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data ptr;
    ptr.n = 5;
    ptr.p = 'c';
    ptr.s = "hello";
    std::cout << "---------Serialize---------" <<std::endl;
    uintptr_t b =  Serializer::serialize(&ptr);
    std::cout << "intptr : "<< std::hex << b <<std::endl;
    std::cout << "---------Deserialize---------" <<std::endl;
    Data* deserialize = Serializer::deserialize(b);
    deserialize->n = 6;
    deserialize->s = "world";
     deserialize->p = 'A';
    std::cout << "int : " <<ptr.n <<std::endl;
    std::cout << "char : " << ptr.p <<std::endl;
    std::cout << "string : " << ptr.s <<std::endl;

    
}
