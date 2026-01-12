/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:22:07 by abdo              #+#    #+#             */
/*   Updated: 2026/01/12 08:47:47 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Templete.hpp"

int main()
{
   float a = 2;
   float b = 6;
   swap(a,b);
   std::cout << "Swap"<< std::endl;
   std::cout << "a : " <<a << std::endl << "b : " <<b <<std::endl; 
   
   std::cout << "Min" << std::endl;
   std::cout << min(a,b)<<std::endl; 
  
   std::cout << "Max"<< std::endl;
   std::cout <<  max(a,b) <<std::endl;
}
