/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:40:24 by abdo              #+#    #+#             */
/*   Updated: 2025/10/15 18:49:43 by abdo             ###   ########.fr       */
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
    void setWeapon(Weapon& pb);
    void attack();
    ~HumanB();
};


