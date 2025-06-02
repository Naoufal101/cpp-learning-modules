/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:42:25 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/27 22:59:35 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point a(2, 0);
	Point b(-3, 0);
	Point c(0 , 4);
	Point r(0, 1);

	if (bsp(a, b, c, r)) {
		std::cout << "this point is inside the triangle" << std::endl; 
	}
	else
		std::cout << "this point is outside the triangle" << std::endl;
	
	return 0;
}