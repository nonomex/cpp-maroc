/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:01:51 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 16:24:06 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <cstdlib>
#include <iostream>

Base * generate(void)
{
    int i = rand() % 3;
    if (i == 0)
    {
        std::cout << "A" <<std::endl;
        Base *a = new A;
        return (a);
    }
    else if (i == 1)
    {
        std::cout << "B" << std::endl;
        return (new B);
    }
    else 
    {
        std::cout << "C" << std::endl;
        return (new C);
    }
}

void identify(Base *p)
{
    if (A* a = dynamic_cast< A* >( p ))
        std::cout << "The type of the base is A" << std::endl;
    else if (C* a = dynamic_cast< C* >( p ))
        std::cout << "The type of the base is C"<< std::endl;
    else 
        std::cout << "The type of the base is B"<< std::endl;
}

void identify(Base &p)
{
    if (A* a = dynamic_cast< A* >( &p ))
        std::cout << "The type of the base is A" << std::endl;
    else if (C* a = dynamic_cast< C* >( &p ))
        std::cout << "The type of the base is C"<< std::endl;
    else 
        std::cout << "The type of the base is B"<< std::endl;
}

int main (void)
{
    std::srand(time(0));
    Base *test = generate();
    Base *fab = generate();
    Base *you = generate();
    identify(test);
    identify(*test);
    identify(fab);
    identify(*fab);
    identify(you);
    identify(*you);
    delete test;
    delete fab;
    delete you;
}