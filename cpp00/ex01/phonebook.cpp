/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:09:56 by abdo              #+#    #+#             */
/*   Updated: 2025/10/11 18:59:08 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

 void phonebook::addcontact(contact c){
        b[count%8] = c;
        count++;
}
contact phonebook::searchin(int i)
{
    return b[i];
}