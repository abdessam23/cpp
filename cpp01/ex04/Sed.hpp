/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:41:28 by abdo              #+#    #+#             */
/*   Updated: 2025/10/21 18:52:36 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <sstream>
#include <fstream>

class Sed
{
    const std::string file;
    const std::string s1;
    const std::string s2;

    public:
        Sed(const std::string& file,const std::string& s1, const std::string& s2);
        int Ft_Replace();
        ~Sed();
};
