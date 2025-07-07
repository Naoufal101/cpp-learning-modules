/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:21:32 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/07 15:38:28 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void displayElement(const T& data) {
	std::cout << data << std::endl;
}

void increment(int &data) {
	data++;
}

template <typename T>
void iter(T *array, int length, void (*func)(const T&)) {
	for (int a = 0; a < length; a++) {
		func(array[a]);
	}
}

template <typename T>
void iter(T *array, int length, void (*func)(T&)) {
	for (int a = 0; a < length; a++) {
		func(array[a]);
	}
}
#endif