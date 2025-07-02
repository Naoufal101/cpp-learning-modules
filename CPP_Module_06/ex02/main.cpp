/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:54:52 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/02 19:14:46 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifyer.hpp"

int main() {
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	
	Base *a = generate();
	Base &b = *a;
	
	identify(a);
	identify(b);
}