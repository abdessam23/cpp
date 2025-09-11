/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:05:00 by abdo              #+#    #+#             */
/*   Updated: 2025/09/11 17:13:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"


void contact::setfirstname(std::string str)
{
    firstname = str;
}
void contact::setlastname(std::string str)
{
    lastname = str;
}
void contact::setnickname(std::string str)
{
    nickname = str;
}
void contact::setphonenumber(std::string str)
{
    phonenumber = str;
}
void contact::setsecret(std::string str)
{
    secret = str;
}
std::string contact::getfirstname(){ return firstname;}
std::string contact::getlastname(){ return lastname;}
std::string contact::getnickname(){ return nickname;}
std::string contact::getphonenumber(){ return phonenumber;}
std::string contact::getsecret(){ return secret;}