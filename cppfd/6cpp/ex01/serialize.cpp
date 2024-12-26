/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:36:44 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 18:02:39 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

serialize::serialize()
{}

serialize::~serialize()
{}

uintptr_t serialize::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* serialize::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}