/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:50:10 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/15 21:39:28 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure") {
	//std::cout << "cure AMateria created" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	//std::cout << "cure AMateria copied" << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Cure::~Cure() {
	//std::cout << "cure destructor called" << std::endl;
}

AMateria* Cure::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
