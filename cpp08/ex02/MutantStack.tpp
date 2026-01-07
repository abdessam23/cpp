/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/07 09:49:14 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <iostream>
#include<list>

template<typename T> class MutantStack
{
    private:
        std::list<T> st;
       
    public:
        MutantStack(){}
        MutantStack(const MutantStack& other){}
        MutantStack& operator=(const MutantStack& other){}
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