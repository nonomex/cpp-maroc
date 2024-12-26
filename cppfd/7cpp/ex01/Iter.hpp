/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:45:14 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 16:57:44 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void Iter(T *a, size_t i, void (*f)(const T &))
{
    size_t l = 0;
    while (l < i)
    {
        f(a[l]);
        l++;
    }
}

#endif