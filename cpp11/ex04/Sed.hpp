/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:41:28 by abdo              #+#    #+#             */
/*   Updated: 2025/10/18 11:40:26 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <fstream>

class Sed
{
    std::string file;
    const std::string s1;
    const std::string s2;

    public:
        Sed(std::string& file,const std::string& s1, const std::string& s2);
        int Ft_Replace();
        ~Sed();
};
