/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:00:58 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/15 15:09:32 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main () {
	std::vector<int> vec;
	vec.push_back(2);
	vec.push_back(1337);
	vec.push_back(3);
	
	try {	
		std::vector<int>::iterator it = easyfind(vec, 1337);
		std::cout << "[OK] Found value " << *it << " in the container." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


    return 0;
}