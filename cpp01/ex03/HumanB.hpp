/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:40:24 by abdo              #+#    #+#             */
/*   Updated: 2025/10/16 13:16:39 by abdo             ###   ########.fr       */

/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *pb;
   
public:
    HumanB(std::string name);
    void setWeapon(Weapon& m);
    void attack();
    ~HumanB();
};

