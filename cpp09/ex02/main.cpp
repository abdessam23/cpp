/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:09:40 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/21 12:36:37 by abhimi           ###   ########.fr       */
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
    if (!PmergeMe::check_arg(arg))
    {
        std::cerr<< "Invalid input"<< std::endl;
        return 1;
    }
    std::vector<std::string>  str;
    std::vector<int>  arr;
    std::deque<int>  deq;   
    PmergeMe::fill_string(arg,str);
    
    
for (int i = 0; i < str.size(); i++)
    {
        double n = std::strtod(str[i].c_str(), NULL);
        if (n < 0 || n > INT_MAX)
        {
            std::cerr << "Error : only positive integers ." << std::endl;
            return 1;
        }
        else
        {
            arr.push_back(n);
            deq.push_back(n);
        }
    }
    PmergeMe a(arr,deq);
    
    std::cout << "The array before sorting : ";
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    a.sort_pair(a.getvector());  
    a.split_element(a.arr);
    std::cout << "\n\nThe array after sorting : ";
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    
}