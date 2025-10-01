/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:25:46 by abdo              #+#    #+#             */
/*   Updated: 2025/10/01 16:50:07 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string str);
        ~FragTrap();
        void highFivesGuys();
};
