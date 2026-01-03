/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:44:34 by abdo              #+#    #+#             */
/*   Updated: 2026/01/03 10:15:51 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "C.hpp"
#include <cstdlib>

int main()
{
    std::srand(time(0));
    Base *b = generate();
    identify(b);
    Base *a = generate();
    Base& p = *a;
    identify(p);
    delete b;
    delete a;
}