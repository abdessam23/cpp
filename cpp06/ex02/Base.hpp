/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:01:52 by abdo              #+#    #+#             */
/*   Updated: 2025/12/01 20:15:56 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};


Base* generate(void);
void identify(Base& p);
void identify(Base* p);