/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:11:15 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/09 14:07:57 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
int main()
{
    std::vector<int> a(2,6);
    try
    {
        std::vector<int>::iterator it = easyfind(a,3);
        std::cout << std::distance(a.begin(),it) <<std::endl;
    }
    catch(const std::exception& e)
    {
        
        std::cerr << e.what() << '\n';
    }
    
    
}