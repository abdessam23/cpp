/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/08 15:21:22 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <iostream>
#include<stack>

template<typename T,typename container = std::deque<T> > 
class MutantStack : public std::stack<T,container>
{
    private:       
    public:
        class iterator;
        MutantStack():std::stack<T,container>(){} 
        MutantStack(const MutantStack& other){
            *this = other;
        }
        // MutantStack& operator=(const MutantStack& other)= default;
        ~MutantStack(){}
        class iterator
        {
            private:
               typename container::iterator it;
            public:
                iterator(typename container::iterator it):it(it){}
                // iterator(const iterator& other)= default;
                // iterator& operator=(const iterator& )= default;
                ~iterator(){}
                iterator& operator++(){
                    --this->it;
                    return *this;}
                iterator operator++(int){
                    iterator tmp = *this;
                    this->it--;
                    return tmp;}
                iterator& operator--(){
                    this->it++;
                    return *this;
                }
                iterator operator--(int){
                    iterator tmp = *this;
                    this->it++;
                    return tmp;}
                bool operator==(const iterator& p)
                {
                    return (this == p);
                }
                bool operator!=(const iterator& p)
                {
                    return (this->it != p.it);
                }
                bool operator>(const iterator& p)
                {
                    return (this > p);
                }
                bool operator<(const iterator& p)
                {
                    return (this < p);
                }
                T& operator*() const
                {
                    return *it;
                }
        };
        iterator begin() 
        {
            return iterator(this->c.end()- 1);
        }
        iterator end() 
        {
            return iterator(this->c.begin());
        }

};


#endif