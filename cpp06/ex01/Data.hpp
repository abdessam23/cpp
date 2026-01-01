/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:04:42 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/01 11:28:30 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data
{
    private:
    Data(const Data&);
    Data& operator=(const Data&);
    
    public:
        int n ;
        char p;
        std::string s;
        Data();
        ~Data();
};
#endif