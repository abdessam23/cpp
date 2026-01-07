/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/07 12:20:24 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <iostream>
#include<stack>

template<typename T,typename container = std::deque<const T&>> 
class MutantStack : public std::stack<T,container>
{
    private:       
    public:
        MutantStack():std::stack<T,container>(){}
        MutantStack(const MutantStack& other){
            *this = other;
        }
        MutantStack& operator=(const MutantStack& other){
            return *this;
        }
        ~MutantStack(){}
        class iterator
        {
            public:
                iterator(){}
                iterator(const iterator&){}
                iterator& operator=(const iterator& ){return *this;}
                ~iterator(){}
                iterator& operator++(int){
                    *(this++);
                    return *this;}
                iterator operator++(){
                    iterator tmp = *this;
                    *(this++);
                    return tmp;}
        };
        

};


#endif