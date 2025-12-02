/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:44:34 by abdo              #+#    #+#             */
/*   Updated: 2025/12/02 13:46:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *b = generate();
    identify(b);
    Base *a = generate();
    Base& p = *a;
    identify(p);
    delete b;
    delete a;
}