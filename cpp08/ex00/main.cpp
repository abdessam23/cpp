/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:11:15 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/09 14:10:05 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
int main()
{
    std::vector<int> a= {1,3,4,5,6,7,8};
    try
    {
        std::vector<int>::iterator it = easyfind(a,7);
        std::cout << std::distance(a.begin(),it) <<std::endl;
    }
    catch(const std::exception& e)
    {
        
        std::cerr << e.what() << '\n';
    }
    
    
}