/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:41:26 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/07 12:20:54 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"


int main()
{
    MutantStack<std::string> a;
    // MutantStack<int> b = a;
    a.push("hello");
    MutantStack<std::string>::iterator it ;
    // MutantStack<std::string> b = a;
    while (!a.empty())
    {
        std::cout << a.top() ;
        a.pop();
    }
    
    
}