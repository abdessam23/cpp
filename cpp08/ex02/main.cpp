/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:41:26 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/08 11:43:57 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"


int main()
{
    MutantStack<std::string> a;
   
    a.push("hello");
    MutantStack<std::string>::Iterator it  = a.begin();
   std::cout << *it << std::endl;
    // MutantStack<std::string> b = a;
    // while (!a.empty())
    // {
    //     std::cout << a.top() ;
    //     a.pop();
    // }
    
    
}