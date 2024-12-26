/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:01:13 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 11:55:03 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>

class ScalarConverter
{
    private : 
        ScalarConverter();
        ~ScalarConverter();
    public : 
        static void convert(std::string number);
        int operator()(const std::string& s) const;
};

#endif
