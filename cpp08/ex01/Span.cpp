/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:07:30 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/05 11:16:57 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}
Span::Span(unsigned int n):N(n)
{}
Span::Span(const Span& other):N(other.N)
{}
Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        N = other.N;
    }
    return *this;
}
Span::~Span()
{}