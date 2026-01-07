/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:41:26 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/07 10:25:31 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"


int main()
{
    MutantStack<std::string> a;
    // MutantStack<int> b = a;
    a.push(" stack.");
    a.push(" my first");
    a.push(" is");
    a.push(" this");
    a.push(" world");
    a.push("hello");  
    
    MutantStack<std::string> b = a;
    while (!b.empty())
    {
        std::cout << b.top() ;
        b.pop();
    }
    
    
}