/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:06:50 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 14:25:30 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <limits>

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}

int ScalarConverter::operator()(const std::string &s) const
{
    return (std::atoi(s.c_str()));
}

static void convert_char(std::string number)
{
    std::cout << "char: '" << number << "'" << std::endl;
    std::cout << "int: " << number[0] + 0 << std::endl;
    std::cout << "float: " << number[0] + 0 << ".0f" << std::endl;
    std::cout << "double: " << number[0] + 0 << ".0" << std::endl;
}

static void convert_int(int number)
{
    char c = number; 
    if (std::isprint(c))
        std::cout << "char: '" << c<< "'" << std::endl;
    else 
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << number << std::endl;
    std::cout << "float: " << number << ".0f" << std::endl;
    std::cout << "double: " << number << ".0" <<std::endl;
}

static void convert_double(double number, std::string s)
{
    char c = (int)number;
    if (std::isprint(c) && number >= 0 && number <= 127)
        std::cout << "char: '" << c << "'" << std::endl;
    else 
        std::cout << "char: Non displayable" << std::endl;
    if (strtol(s.c_str(), NULL, 10) && std::strtol(s.c_str(), NULL, 10) <= 2147483647 && strtol(s.c_str(), NULL, 10) >= -2147483648)
        std::cout << "int: " << strtol(s.c_str(), NULL, 10) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (static_cast<double>(strtol(s.c_str(), NULL, 10)) == strtod(s.c_str(), NULL))
    {
        if (strtof(s.c_str(), NULL) && strtof(s.c_str(), NULL) <= std::numeric_limits<float>::max() && strtof(s.c_str(), NULL) >= -1.17549e+38)
            std::cout << "float: " << number << ".0f" << std::endl;
        else
            std::cout << "float: impossible" << std::endl;
        if (strtod(s.c_str(), NULL) <= std::numeric_limits<double>::max() && strtod(s.c_str(), NULL) >= -1.7976931348623157E+308)
            std::cout << "double: " << number << ".0" << std::endl;
        else 
            std::cout << "double: impossible" << std::endl;
    }
    else
    {
        if (strtof(s.c_str(), NULL) && strtof(s.c_str(), NULL) <= std::numeric_limits<float>::max() && strtof(s.c_str(), NULL) >= -1.17549e+38)
            std::cout << "float: " << number << "f" << std::endl;
        else
            std::cout << "float: impossible" << std::endl;
        if (strtod(s.c_str(), NULL) <= std::numeric_limits<double>::max() && strtod(s.c_str(), NULL) >= -1.7976931348623157E+308)
            std::cout << "double: " << number << std::endl;
        else 
            std::cout << "double: impossible" << std::endl;
    }
}

static int check_zero(std::string number)
{
    int i = 0;
    
    while (number[i] == ' ')
        i++;
    while (number[i] == '+' || number[i] ==  'i')
        i++;
    if (number[i] != '0')
        return (0);
    return (1);
}

void ScalarConverter::convert(std::string number)
{
    if (number == "nan" || number == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (number == "inf" || number == "inff" || number == "+inf" || number == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: inf" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else if (number == "-inf" || number == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: -inf" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if (strtod(number.c_str(), NULL))
        convert_double(strtod(number.c_str(), NULL), number);
    else if (strtol(number.c_str(), NULL, 10))
        convert_int(strtol(number.c_str(), NULL, 10));
    else if (check_zero(number))
    {
        std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: 0" << std::endl;
        std::cout << "float: 0.0f" << std::endl;
        std::cout << "double: 0.0" << std::endl;
    }
    else if (number.size() == 1 && std::isprint(number[0]))
        convert_char(number);
    else
        std::cout << "wrong input" << std::endl;
}
