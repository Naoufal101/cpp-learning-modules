/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:31:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/25 19:15:37 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat general("khaftar", 3);
	PresidentialPardonForm Form("abdillah");
	ShrubberyCreationForm filahaRoghsa("filah");
	RobotomyRequestForm scienceForm("victim");

	AForm *array[4] = {&Form, &filahaRoghsa, &scienceForm};
	
	//AForm *wati9a = ("ro5ssa", 2, 1);

	try
	{
		for (int i = 0; i < 3; i++)
		{
			general.signForm(*array[i]);
			general.executeForm(*array[i]);
		}
		general.incrementGrade();
		//general.signForm(wati9a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << general << std::endl;
}