/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:44:58 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 17:01:02 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"


template <typename T>
void print(T val)
{
    std::cout << "value is : " << val << std::endl;
}

int main (void)
{
    int    tab[5] = {0, 150, -28, 42, 74};
    float    tab2[5] = {35.2f, 10.5f, -88.25f, 5.5f, 42.42f};
    std::string tab3[7] = {"hey", "salut", "coucou" , "bonjour", "yo", "wesh", "salutations"};

    std::cout << "test 1 :" << std::endl;
    ::Iter(tab, 5, print);
    std::cout << "\ntest 2 : " << std::endl;
    ::Iter(tab2, 5, print);
    std::cout << "\ntest 3 : " << std::endl;
    ::Iter(tab3, 7, print);

    return 0;
}
