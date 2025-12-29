/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:06:19 by abdo              #+#    #+#             */
/*   Updated: 2025/12/29 16:08:18 by abhimi           ###   ########.fr       */
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
    std::cout << "intptr : " << b <<std::endl;
    std::cout << "---------Deserialize---------" <<std::endl;
    Data* deserialize = Serializer::deserialize(b);
    deserialize0->n
    std::cout << "int : " <<deserialize->n <<std::endl;
    std::cout << "char : " << deserialize->p <<std::endl;
    std::cout << "string : " << deserialize->s <<std::endl;

    
}
