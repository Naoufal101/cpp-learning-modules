/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:31:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/27 20:37:00 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	Intern		stagerMiskin;
	AForm*		forms[] = {stagerMiskin.makeForm("presidential pardon", "motaham"),
							stagerMiskin.makeForm("robotomy request", "cyborg"),
							stagerMiskin.makeForm("shrubbery creation", "park")};

	try
	{
		Bureaucrat	mowadaf("rayiss", 1);						
		for (int i = 0; i < 3; i++) {
			std::cout << *forms[i];
			mowadaf.signForm(*forms[i]);
			mowadaf.executeForm(*forms[i]);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	for (int i = 0; i < 3; i++) {
		delete forms[i];
	}
	
}