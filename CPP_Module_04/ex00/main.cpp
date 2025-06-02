/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:06:59 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/15 19:35:04 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << i->getType() << " ";
	i->makeSound();
	meta->makeSound();
	
	std::cout << "-----------destructor calls----------" << std::endl;
	delete meta;
	delete j;
	delete i;
	

	std::cout << "\n----Wrong implementation-----\n" << std::endl;
	const WrongAnimal* fake = new WrongAnimal();
	const WrongAnimal* w = new WrongCat();
	std::cout << w->getType() << " " << std::endl;
	w->makeSound();
	fake->makeSound();

	std::cout << "-----------destructor calls----------" << std::endl;
	delete fake;
	delete w;
	
	return 0;			  
}