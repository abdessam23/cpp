/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:45:14 by abdo              #+#    #+#             */
/*   Updated: 2025/10/21 14:48:07 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sed.hpp"

int main(int ac,char** argv)
{
    if (ac != 4)
    {
        std::cerr << "Please enter 3 arguments" << std::endl;
        return (1);
    }
    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    Sed a(file , s1, s2);
    if (!a.Ft_Replace())
        return (1);
    return (0);
}