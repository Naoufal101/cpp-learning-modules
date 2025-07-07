/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:31:56 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/07 17:16:09 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"

template <typename T>
class Array {
	private:
		T*				data;
		unsigned int	len;
	public:
	
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array	&operator=(const Array& other);
		T		&operator[](unsigned int	n);
		const T	&operator[](unsigned int	n) const; 

		unsigned int size() const;
};

#include "Array.tpp"
#endif