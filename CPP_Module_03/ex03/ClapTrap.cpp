/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:31:06 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 16:25:43 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default Constructor
ClapTrap::ClapTrap() 
    : name("Jack")
    , hitPoints(10)
    , energyPoint(10)
    , attackDamage(0)
{
      std::cout << "ClapTrap named himself Jack after creating his own identity.!" << std::endl;  
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string& name)
    : name(name)
    , hitPoints(10)
    , energyPoint(10)
    , attackDamage(0)
{
    std::cout << "ClapTrap " << name << " created." << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap " << name << " copied." << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    if (this != &other) {
        name         = other.name;
        hitPoints    = other.hitPoints;
        energyPoint  = other.energyPoint;
        attackDamage = other.attackDamage;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

// Behaviors
void ClapTrap::attack(const std::string& target)
{
    if (hitPoints == 0 || energyPoint == 0) {
        std::cout << "ClapTrap " << name
                  << " can't attack — no hit points or energy!" << std::endl;
        return;
    }
    --energyPoint;
    std::cout << "ClapTrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << name << " is already out of hit points!" << std::endl;
        return;
    }
    if (amount >= static_cast<unsigned int>(hitPoints))
        hitPoints = 0;
    else
        hitPoints -= amount;

    std::cout << "ClapTrap " << name
              << " takes " << amount
              << " points of damage! (HP left: " << hitPoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0 || energyPoint == 0) {
        std::cout << "ClapTrap " << name
                  << " can't repair — no hit points or energy!" << std::endl;
        return;
    }
    --energyPoint;
    hitPoints += amount;
    std::cout << "ClapTrap " << name
              << " repairs itself, gaining " << amount
              << " hit points! (HP now: " << hitPoints << ")" << std::endl;
}
