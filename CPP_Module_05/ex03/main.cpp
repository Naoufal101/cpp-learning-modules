/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:31:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/06/01 19:06:03 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	std::srand(std::time(0));
	Intern		stagerMiskin;
	AForm*		forms[] = {stagerMiskin.makeForm("robotomy request", "T-800"),
							stagerMiskin.makeForm("shrubbery creation", "park"),
							stagerMiskin.makeForm("robotomy request", "cyborg"),
							stagerMiskin.makeForm("presidential pardon", "motaham"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop"),
							stagerMiskin.makeForm("robotomy request", "RoboCop")
							};
	try
	{
		Bureaucrat	mowadaf("rayiss", 1);						
		for (int i = 0; i < 22; i++) {
			if (forms[i])
			{
				std::cout << "\n-----bureaucratic procedure------" << std::endl;
				std::cout << *forms[i];
				mowadaf.signForm(*forms[i]);
				mowadaf.executeForm(*forms[i]);
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// free the memory
	for (int i = 0; i < 22; i++) {
		if (forms[i])
			delete forms[i];
	}
	
}