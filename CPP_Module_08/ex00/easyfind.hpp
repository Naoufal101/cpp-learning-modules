/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:53:15 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/12 17:56:22 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int num) {
	typename T::iterator it =  std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw std::runtime_error("[KO] Not found");
	return it;
}

#endif