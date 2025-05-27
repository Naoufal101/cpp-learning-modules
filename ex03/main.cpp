/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:31:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/27 17:17:00 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat general("khaftar", 150);
	Intern mi3tti;

	AForm *ro5ssa;
	ro5ssa = mi3tti.makeForm("shrubbery creation", "abdo");
	if (ro5ssa) {
		try {
			general.signForm(*ro5ssa);
			general.executeForm(*ro5ssa);			
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl; 
		}
	}
	
	// PresidentialPardonForm Form("abdillah");
	// ShrubberyCreationForm filahaRoghsa("filah");
	// RobotomyRequestForm scienceForm("victim");

	// AForm *array[4] = {&Form, &filahaRoghsa, &scienceForm};
	
	// //AForm *wati9a = ("ro5ssa", 2, 1);

	// try
	// {
	// 	for (int i = 0; i < 3; i++)
	// 	{
	// 		general.signForm(*array[i]);
	// 		general.executeForm(*array[i]);
	// 	}
	// 	general.incrementGrade();
	// 	//general.signForm(wati9a);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// std::cout << general << std::endl;
}