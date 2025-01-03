/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:53:14 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 18:02:03 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main (void)
{
    Data originalData = {42, 19, 12, 2024};

    uintptr_t serializedData = serializer::serialize(&originalData);
    std::cout << "Serialized Data (uintptr_t): " << serializedData << std::endl;

    Data* deserializedData = serializer::deserialize(serializedData);
    std::cout << serializedData << " " << serializer::serialize(deserializedData) << std::endl;
    
    

    return (0);
}