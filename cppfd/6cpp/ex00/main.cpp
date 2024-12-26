/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:09:03 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 11:16:24 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "iostream"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "wrong number of arguments" << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}