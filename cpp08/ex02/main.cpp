/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:41:26 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/11 17:47:00 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"



int main()
{
    MutantStack<std::string> mystack;
    mystack.push("hello");
    mystack.push("world");

    std::cout << mystack.top() << std::endl;
    mystack.pop();
    
    std::cout << mystack.size() << std::endl;

    mystack.push("man");
    mystack.push("are");
    mystack.push("you");
    mystack.push("today");
    const  MutantStack<std::string> copy(mystack);
    MutantStack<std::string>::const_iterator it;

    for(it =  copy.begin(); it != copy.end();++it)  
    {
        std::cout << *it << std::endl;
    }    
    
}