/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:45:13 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/05 17:12:58 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap (T &a, T &b) {
	T tmp = a;
	
	a = b;
	b = tmp;
}

template <typename T>
T &min (T &a, T &b) {
	return (a < b) ? a : b;
}

template <typename T>
T &max (T &a, T &b) {
	return (a > b) ? a: b;
}
#endif