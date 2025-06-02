/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:34:38 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/15 22:17:26 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("fire"); 
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob; 
	delete me;
	delete src;

	std::cout << "\n-----check deep copy------\n" << std::endl;
    // Create and setup a character
    Character* alice = new Character("Alice");
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    alice->equip(ice);
    alice->equip(cure);

    Character* clone = new Character(*alice);

    std::cout << "--- Using clone ---" << std::endl;
    clone->use(0, *alice);
    clone->use(1, *alice);

    std::cout << "--- Using original ---" << std::endl;
    alice->use(0, *clone);
    alice->use(1, *clone);

    // Delete the clone and verify no crash or invalid memory use
    delete clone;

    std::cout << "--- Using Alice after clone is deleted ---" << std::endl;
    alice->use(0, *alice);
    alice->use(1, *alice);

    delete alice;
	return 0; 
}