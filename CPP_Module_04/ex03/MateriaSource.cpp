/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:19:05 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/15 21:40:02 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        storage[i] = nullptr;
    //std::cout << "MateriaSource constracter called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; ++i) {
        if (other.storage[i])
            storage[i] = other.storage[i]->clone();
        else
            storage[i] = nullptr;
    }
    //std::cout << "MateriaSource copy constracter called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete storage[i];
            storage[i] = other.storage[i] ? other.storage[i]->clone() : nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i)
        delete storage[i];
    //std::cout << "MateriaSource destractor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m)
        return;

    for (int i = 0; i < 4; ++i) {
        if (storage[i] == nullptr) {
            storage[i] = m;
            return;
        }
    }

    // Inventory full
    std::cout << "MateriaSource: inventory full, can't learn more Materia.\n";
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (storage[i] && storage[i]->getType() == type)
            return storage[i]->clone();
    }
    std::cout << "MateriaSource: unknown Materia type '" << type << "'\n";
    return nullptr;
}
