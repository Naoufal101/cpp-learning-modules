/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:42:46 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/27 15:50:43 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    (void)other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
	int index = -1;
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; ++i) {
        if (formName == forms[i]) {
			index = i;
            std::cout << "Intern creates " << formName << std::endl;
        }
    }

	switch (index)
	{
	case 0:
		return new ShrubberyCreationForm(target);
	case 1:
		return new RobotomyRequestForm(target);
	case 2:
		return new PresidentialPardonForm(target);
	default:
		break;
	}

    std::cerr << "Intern couldn't find the form: " << formName << std::endl;
    return nullptr;
}