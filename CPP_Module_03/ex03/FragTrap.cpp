/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:20:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 18:16:02 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "Fragtrap constructor called for " << name << std::endl;
}

// Parameterized constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap parameterized constructor called for " << name << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

// Assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

// Overridden attack method
void FragTrap::attack(const std::string& target) {
    if (energyPoint > 0 && hitPoints > 0) {
        std::cout << "FragTrap " << name
                  << " launches a powerful attack on " << target
                  << ", dealing " << attackDamage
                  << " points of damage!" << std::endl;
        energyPoint--;
    } else {
        std::cout << "FragTrap " << name << " can't attack, no energy or dead!" << std::endl;
    }
}

// Unique method
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " wants a high five! ✋" << std::endl;
}
