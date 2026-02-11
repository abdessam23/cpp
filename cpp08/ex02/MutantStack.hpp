/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:04:53 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/11 17:45:03 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <iostream>
#include<stack>

template<typename T,typename container = std::deque<T> > 
class MutantStack : public std::stack<T,container>
{     
    public:
        MutantStack():std::stack<T,container>(){} 
        MutantStack(const MutantStack& other):std::stack<T,container >(other){}
        MutantStack& operator=(const MutantStack& other)
        {
            if (this != &other)
            {
                std::stack<T,container>::operator=(other);
            }
            return *this;
        }
        ~MutantStack(){}
     
       typedef typename container::iterator iterator;
       typedef typename container::const_iterator const_iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }

        const_iterator begin() const
        {
            return this->c.begin();
        }
        const_iterator end() const
        {
            return this->c.end();
        }
};


#endif