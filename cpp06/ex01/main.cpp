/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:06:19 by abdo              #+#    #+#             */
/*   Updated: 2025/12/30 09:56:31 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data ptr;
    ptr.n = 5;
    ptr.p = 65;
    ptr.s = "hello";
    std::cout << "---------Serialize---------" <<std::endl;
    uintptr_t b =  Serializer::serialize(&ptr);
    std::cout << "intptr : "<< std::hex << b <<std::endl;
    std::cout << "---------Deserialize---------" <<std::endl;
    Data* deserialize = Serializer::deserialize(b);
    deserialize->n = 6;
    deserialize->s = "world";
    std::cout << "int : " <<ptr.n <<std::endl;
    std::cout << "char : " << deserialize->p <<std::endl;
    std::cout << "string : " << ptr.s <<std::endl;

    
}
