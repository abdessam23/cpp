/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:36:41 by abdo              #+#    #+#             */
/*   Updated: 2025/10/22 10:36:42 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl a;
    a.complain("DEBUG");
    a.complain("INFO");
    a.complain("WARNING");
    a.complain("ERROR");
    a.complain("nolog");
    a.complain("");
}