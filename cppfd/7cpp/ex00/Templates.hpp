/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:29:08 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 16:44:11 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void swap(T &x, T &y)
{
   T z= x;
   x = y;
   y = z;
}

template <typename T> T min(T x, T y)
{
    if (x < y)
        return (x);
    else 
        return (y);
}

template <typename T> T max(T x, T y)
{
    if (x < y)
        return (y);
    else 
        return (x);
}