/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:16:00 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/02 15:24:32 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data d = {1337};
	std::cout << d.value << std::endl;
	
	uintptr_t value = Serializer::serialize(&d);
	std::cout << value << std::endl;

	std::cout << Serializer::deserialize(value)->value << std::endl;
}