/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/27 10:20:10 by abhimi           ###   ########.fr       */
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
    }
   catch(const std::exception& e)
   {
        std::cout << e.what() << std::endl;
   }   
}
