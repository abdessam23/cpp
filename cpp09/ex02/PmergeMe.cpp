/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:55:18 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/26 16:03:14 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp" 


size_t jacobsthal(size_t n)
{
    return ((pow(2,n + 1) + pow(-1,n))/3); 
}

void create_pairs(std::vector<int>& arr, std::vector<int>& a,std::vector<int>& b,int &odd)
{
    for(size_t i = 0; i <arr.size();i+=2)
    {
        if (arr[i] < arr[i + 1])
        {
            a.push_back(a[i + 1]);
            b.push_back(a[i]);
        }
        else
        {
            a.push_back(a[i]);
            b.push_back(a[i + 1]);
        }
    }
}

void merge_insert(std::vector<int>& arr)
{
    std::vector<int> a,b;
    int rem = -1;
    create_pairs(arr,a,b,rem); 
}






















void fill_string(char** arg,std::vector<std::string> &str)
{
    int i = 1;
    std::string s;
    std::string tmp;
    while (arg[i])
    {
       s += arg[i] ; 
       s += " ";
       i++;
    }
    std::stringstream ss(s); 
    while(ss >>tmp)
    {
        str.push_back(tmp);
    }
}

void valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq)
{
    std::vector<std::string>  str;
    fill_string(arg,str);
    char* end = NULL;
    for (size_t i = 0; i < str.size(); i++)
    {
        double n = std::strtod(str[i].c_str(), &end);
        if ((n < 0 || n > INT_MAX) || *end != '\0')
        {
            throw std::runtime_error("Error : only positive integers.");
        }
        else
        {
            arr.push_back(n);
            deq.push_back(n);
        }
    }
}

void mergeinsert(std::vector<int>& arr,std::deque<int>& deq)
{
    PmergeMe<std::vector<int> > a;
    PmergeMe<std::deque<int> > d;

    std::cout << "The array before sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout << deq[i] << " ";

    double n = d.mergeinseert(deq);
    std::cout << "\nThe array after sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout << deq[i] << " ";

    std::cout << "\n\nTime to process a range of " 
    << deq.size() << " element with std::deque<int>  is : "<< std::fixed << n <<  " ms";
    
    std::cout << "\nTime to process a range of " 
    << arr.size() << " element with std::vector<int>  is : "<< std::fixed <<  arr.size() <<  " ms" << std::endl; 
}
