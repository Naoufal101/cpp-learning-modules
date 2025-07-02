/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 19:15:26 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/02 19:15:39 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifyer.hpp"

Base * generate(void) {
	int random = std::rand() % 3;
	
	if (random == 0) return(new A);
	if(random == 1) return(new B);
	return (new C);
}

void identify(Base* p) {
	std::cout << "the type of the object is: ";
	if (dynamic_cast<A*>(p)) std::cout << "A\n";
	else if (dynamic_cast<B*>(p)) std::cout << "B\n";
	else if (dynamic_cast<C*>(p)) std::cout << "C\n";
	else std::cout << "Unknown\n";
}

void identify(Base& p) {
	std::cout << "the type of the object is: ";
	
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (std::exception& e) {
		try {
			(void) dynamic_cast<B&>(p);
			std::cout << "B\n";
		}
		catch (std::exception& e) {
			try {
				(void) dynamic_cast<C&>(p);
				std::cout << "C\n";
			}
				catch (std::exception& e) {
				std::cout << "Unknown\n";
			}
		}
	}
}