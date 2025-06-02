/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:33:55 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 16:25:35 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called for " << name << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other); // Call base class assignment
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

// Overridden attack method
void ScavTrap::attack(const std::string& target) {
    if (energyPoint > 0 && hitPoints > 0) {
        std::cout << "ScavTrap " << name
                  << " attacks " << target
                  << ", causing " << attackDamage
                  << " points of damage!" << std::endl;
        energyPoint--;
    } else {
        std::cout << "ScavTrap " << name << " can't attack, no energy or dead!" << std::endl;
    }
}

// Unique method
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}
