/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:11:15 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/05 14:38:15 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
int main()
{
    std::vector<int> a(2,6);
    try
    {
        std::cout << easyfind(a,6) <<std::endl;
    }
    catch(const std::exception& e)
    {
        
        std::cerr << e.what() << '\n';
    }
    
    
}