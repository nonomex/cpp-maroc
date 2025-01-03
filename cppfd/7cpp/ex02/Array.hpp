/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:04:06 by aammirat          #+#    #+#             */
/*   Updated: 2024/12/19 17:07:36 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T> class Array
{
    private :
        T    *array;
        int    size;
    public : 
        Array()
        {   
            size = 0;
            array = new T[size];
        }
        Array (int siz)
        {   
            size = siz;
            array = new T[size];
        }
        Array (const Array &copy)
        {
            size = copy.size;
            array = NULL;
            *this = copy;
        }
        ~Array()
        {
            if (array != NULL)
                delete [] array;
        }
        Array &operator=(const Array &src)
        {
            int i;
            if (array != NULL)
                delete [] array;
            if (src.getsize() != 0)
            {
                size = src.getsize();
                array = new T[size];
                for (i = 0; i < size; i++)
                    array[i] = src.array[i];
            }
            return (*this);
        }
        T &operator[](int index)
        {
            if (array == NULL || index >= size)
                throw  Array<T>::InvalidIndexException();
            return (array[index]);
        }
        int getsize() const
        {return (size);}
        class InvalidIndexException : public std::exception {public : virtual const char *what() const throw();};
};

template <typename T> 
const char *Array<T>::InvalidIndexException::what() const throw()
{
    return ("Error: Invalid index");
}

#endif