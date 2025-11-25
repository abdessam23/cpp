/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:19:56 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 13:32:25 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/10 16:12:54 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
<<<<<<< HEAD
=======
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
>>>>>>> master
    ~Brain();
};

