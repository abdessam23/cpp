/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:25:23 by abdo              #+#    #+#             */
/*   Updated: 2025/10/16 14:38:20 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type);
    const std::string& getType() const;
    void setType(std::string type);
    
    ~Weapon();
};


