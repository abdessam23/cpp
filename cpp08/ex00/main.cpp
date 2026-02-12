/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:11:15 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/12 18:56:43 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
int main()
{
    std::vector<int> a;
    a.push_back(0);
    a.push_back(8);
    a.push_back(5);
    a.push_back(25);
    a.push_back(3);
    std::list<int> v;
    v.push_back(1);
    v.push_back(88);
    v.push_back(3);
    v.push_back(14);
    v.push_back(3);
    // std::deque<int> c;
    // c.push_back(6);
    // c.push_back(3);
    // c.push_back(44);
    // c.push_back(2);
    // c.push_back(3);
    try
    {
        std::vector<int>::iterator it = easyfind(a,25);
        std::cout << std::distance(a.begin(),it) <<std::endl;
        std::list<int>::iterator itl = easyfind(v,3); 
        std::cout << std::distance(v.begin(),itl) <<std::endl;
        std::deque<int>::iterator itd = easyfind(c,200);  
        std::cout << std::distance(c.begin(),itd) <<std::endl;
    }
    catch(const std::exception& e)
    {
        
        std::cerr << e.what() << '\n';
    }
}
