/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/07 12:44:36 by abhimi           ###   ########.fr       */
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
        class Iterator
        {
            public:
                Iterator(){}
                Iterator(const Iterator&){}
                Iterator& operator=(const Iterator& ){return *this;}
                ~Iterator(){}
                Iterator& operator++(int){
                    *(this++);
                    return *this;}
                Iterator operator++(){
                    Iterator tmp = *this;
                    *(this++);
                    return tmp;}
                Iterator& operator--(int){
                    *(this--);
                    return *this;}
                Iterator operator--(){
                    Iterator tmp = *this;
                    *(this--);
                    return tmp;}
                T& operator*() const
                {
                    return *this;
                }
        };
        

};


#endif