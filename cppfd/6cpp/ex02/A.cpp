/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:59:50 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 15:13:18 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(){}

A::~A(){}

A::A(A &copy){(void) copy;}

A &A::operator=(A& copy){(void) copy; return (*this);}
