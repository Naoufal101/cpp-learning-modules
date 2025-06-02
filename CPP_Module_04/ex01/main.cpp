/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:06:59 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/15 22:10:52 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "\n-----memory management------" << std::endl;
	delete j;
	delete i;

	std::cout << "\n-----check deep copy in Assignment and copy------" << std::endl;
	Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase the cat");

    Dog dog2 = dog1;
   	std::cout << dog2.getBrain()->getIdea(0) << std::endl;

    dog2.getBrain()->setIdea(0, "Eat the bone");
    std::cout << dog1.getBrain()->getIdea(0) << std::endl; 
    std::cout << dog2.getBrain()->getIdea(0) << std::endl;
	
	Cat cat;
	cat.getBrain()->setIdea(0, "Chase the mouse");

    Cat cat1 = cat;
   	std::cout << cat1.getBrain()->getIdea(0) << std::endl;

    cat1.getBrain()->setIdea(0, "Eat the bird");
    std::cout << cat.getBrain()->getIdea(0) << std::endl; 
    std::cout << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "\n-----Destruction chainig------" << std::endl;
	return 0; 
}