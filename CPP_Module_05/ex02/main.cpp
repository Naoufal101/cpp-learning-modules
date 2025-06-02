/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:31:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/06/01 19:03:56 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	std::srand(std::time(0));
	try
	{
		Bureaucrat	mowadaf("rayiss", 1);
		Bureaucrat	wali = mowadaf;
		
		PresidentialPardonForm	form1("hamza");
		ShrubberyCreationForm	form2("park");
		RobotomyRequestForm		form3("cyborg");
		
		AForm*					forms[] = {&form1, &form2, &form3};
		for (int i = 0; i < 3; i++) {
			std::cout << "\n-----bureaucratic procedure------" << std::endl;
			std::cout << *forms[i];
			mowadaf.signForm(*forms[i]);
			mowadaf.executeForm(*forms[i]);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}