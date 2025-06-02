/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:13:31 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 17:07:35 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap(50), name("Default") {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(const std::string& nameInput)
    : ClapTrap(nameInput + "_clap_name"),
      FragTrap(), ScavTrap(50), name(nameInput) {
    hitPoints = FragTrap::hitPoints;
    energyPoint = ScavTrap::energyPoint;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap parameterized constructor called for " << name << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

// Assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        name = other.name;
    }
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

// Overridden attack method from ScavTrap
void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target); // Use ScavTrap version of attack
}

// Unique method
void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is \"" << name
              << "\", ClapTrap name is \"" << ClapTrap::name << "\"" << std::endl;
}
