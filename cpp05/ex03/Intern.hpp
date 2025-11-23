/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:21:13 by abdo              #+#    #+#             */
/*   Updated: 2025/11/23 11:46:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Intern
{
    private:
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string s1,std::string s2);
};

Intern::Intern()
{
}
AForm* makeForm(std::string form,std::string target)
{
       try
    {
        if (form )
        std::cout << "Intern creates " << 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
Intern::~Intern()
{
}
