/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:22:07 by abdo              #+#    #+#             */
/*   Updated: 2025/12/07 14:22:29 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Templete.hpp"

int main()
{
   int a = 4;
   int b = 6;
   swap(a,b);
   std::cout << "Swap"<< std::endl;
   std::cout << "a : " <<a << std::endl << "b : " <<b <<std::endl; 
   
   std::cout << "Min" << std::endl;
   std::cout << min(a,b)<<std::endl; 
  
   std::cout << "Max"<< std::endl;
   std::cout <<  max(a,b) <<std::endl; 
}
