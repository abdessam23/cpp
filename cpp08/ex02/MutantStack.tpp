/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/07 11:16:38 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <iostream>
#include<stack>

template<typename T,typename container= std::deque<T&>> 
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
                this->st = other.st;
            }
            return *this;
        }
        ~MutantStack(){}
        T& top(){
            return st.top();
        }
        
        void push(const T& n)
        {
            st.push(n);
        }
        void pop()
        {
            st.pop();
        }
        bool empty()
        {
            return st.empty(); 
        }
};


#endif