/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/08 12:38:49 by abhimi           ###   ########.fr       */
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
        MutantStack():std::stack<T,container>(){}
        MutantStack(const MutantStack& other){
            *this = other;
        }
        MutantStack& operator=(const MutantStack& other){
            if (this != &other)
            {
                
            }
            return *this;
        }
        ~MutantStack(){}
        class Iterator
        {
            private:
               typename container::iterator it;
            public:
                Iterator(typename container::iterator it):it(it){}
              
                // Iterator(const Iterator& other){*this = other; }
                // Iterator& operator=(const Iterator& ){return *this;}
                // ~Iterator(){}
                // Iterator& operator++(int){
                //     *(this++);
                //     return *this;}
                Iterator operator++(int){
                    Iterator tmp = *this;
                    this->it++;
                    return tmp;}
                // Iterator& operator--(int){
                //     it--;
                //     return *this;}
                // Iterator operator--(){
                //     Iterator tmp = *this;
                //     *(this--);
                //     return tmp;}
                T& operator*() const
                {
                    return *it;
                }
        };
        Iterator begin() 
        {
            return Iterator(this->c.begin());
        }
        

};


#endif