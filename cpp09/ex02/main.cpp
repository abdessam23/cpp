/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/07 13:24:17 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
 
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
        PmergeMe::valid_input(arg,arr,deq);
         PmergeMe::mergeinsert(arr,deq);
         std::cout << PmergeMe::count <<std::endl; 
         
    }
   catch(const std::exception& e)
   {
        std::cout << e.what() << std::endl;
   }   
}
