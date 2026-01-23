/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/23 09:49:39 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe1.hpp"

int main(int ac, char** arg)
{
    if(ac < 2)
    {
        std::cerr<< "Error please enter one integers or more "<< std::endl;
        return 1;
    }
   try 
   {
         std::vector<int>  arr;
        std::deque<int>  deq;
       valid_input(arg,arr,deq);   
        PmergeMe<std::vector<int>> a;
        PmergeMe<std::deque<int>> d;
    
        std::cout << "The array before sorting : ";
        for (int i = 0; i < deq.size(); i++)
        {
            std::cout << deq[i] << " ";
        }
        d.mergeinseert(deq);
        std::cout << "\nThe array after sorting : ";
        for (int i = 0; i < deq.size(); i++)
        {
            std::cout << deq[i] << " ";
        }
        std::cout << "\n";
        a.mergeinseert(arr);
   }
   catch(const std::exception& e)
   {
        std::cout << e.what() << std::endl;
   }   
}