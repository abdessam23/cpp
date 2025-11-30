/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:06:19 by abdo              #+#    #+#             */
/*   Updated: 2025/11/30 23:13:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data ptr;
    ptr.n = 5;
    ptr.p = 65;
    ptr.s = "hello";
    
    uintptr_t b =  Serializer::serialize(&ptr);
    std::cout << "intptr : " << b <<std::endl;
    std::cout << "int : " << ptr.n<<std::endl;
    std::cout << "char : " << ptr.p <<std::endl;
    std::cout << "string : " << ptr.s <<std::endl;
    Data* deserialize = Serializer::deserialize(b);
    std::cout << "int : " <<deserialize->n <<std::endl;
    std::cout << "char : " << deserialize->p <<std::endl;
    std::cout << "string : " << deserialize->s <<std::endl;

    
}
