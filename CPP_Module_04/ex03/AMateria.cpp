/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:26:35 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/15 21:38:38 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

// Default Constructor
AMateria::AMateria() : type("default") {
    //std::cout << "AMateria default constructor called" << std::endl;
}

// Parameterized Constructor
AMateria::AMateria(const std::string& type) : type(type) {
   //std::cout << "AMateria parameterized constructor called" << std::endl;
}

// Copy Constructor
AMateria::AMateria(const AMateria& other) : type(other.type) {
    //std::cout << "AMateria copy constructor called" << std::endl;
}

// Destructor
AMateria::~AMateria() {
    //std::cout << "AMateria destructor called" << std::endl;
}

// Assignment Operator
AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

// Accessor
const std::string& AMateria::getType() const {
    return type;
}

// Virtual Function
void AMateria::use(ICharacter& target) {
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}
