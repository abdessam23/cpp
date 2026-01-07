/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:41:26 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/07 09:51:18 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"


int main()
{
    MutantStack<int> a;
    a.push(2);
    a.push(4);
    a.push(5);
    a.push(7);
    a.push(4);
    a.push(8);
    while (!a.empty())
    {
        std::cout << a.top() << std::endl;
        a.pop();
    }
    
    
}