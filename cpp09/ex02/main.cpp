/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/23 10:09:06 by abhimi           ###   ########.fr       */
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
        double n = d.mergeinseert(deq);
        std::cout << "\nThe array after sorting : ";
        for (int i = 0; i < deq.size(); i++)
        {
            std::cout << deq[i] << " ";
        }
        std::cout << "\n";
        std::cout << "\nTime to process a range of " << deq.size() << " element with std::deque<int>  is : "<< std::fixed << n <<  " us" << std::endl; 
        std::cout << "\nTime to process a range of " << arr.size() << " element with std::vector<int>  is : "<< std::fixed <<  a.mergeinseert(arr) <<  " us" << std::endl; 
   }
   catch(const std::exception& e)
   {
        std::cout << e.what() << std::endl;
   }   
}
