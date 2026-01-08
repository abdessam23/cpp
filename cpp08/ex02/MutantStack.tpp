/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/08 14:52:23 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <iostream>
#include<stack>

template<typename T,typename container = std::deque<T>> 
class MutantStack : public std::stack<T,container>
{
    private:       
    public:
        class Iterator;
        MutantStack():std::stack<T,container>(){}
        MutantStack(const MutantStack& other){
            *this = other;
        }
        // MutantStack& operator=(const MutantStack& other){
           
        // }
        ~MutantStack(){}
        class Iterator
        {
            private:
               typename container::iterator it;
            public:
                Iterator(typename container::iterator it):it(it){}
                Iterator(const Iterator& other)= default;
                Iterator& operator=(const Iterator& )= default;
                ~Iterator(){}
                Iterator& operator++(){
                    --this->it;
                    return *this;}
                Iterator operator++(int){
                    Iterator tmp = *this;
                    this->it--;
                    return tmp;}
                  Iterator& operator--(){
                    --this->it;
                    return this;}
                Iterator operator--(int){
                    Iterator tmp = *this;
                    this->it--;
                    return tmp;}
                T& operator*() const
                {
                    return *it;
                }
        };
        Iterator begin() 
        {
            return Iterator(this->c.end()- 1);
        }
        Iterator end() 
        {
            return Iterator(this->c.begin());
        }

};


#endif