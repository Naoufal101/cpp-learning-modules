/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:42:46 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/31 19:09:26 by nhimad           ###   ########.fr       */
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

static AForm* createShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string& target) {
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string& target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
	typedef AForm* (*FormFp) (const std::string&);
	struct hashMap {
		std::string	key;
		FormFp		make;
	};

	hashMap array[] = {{"shrubbery creation", createShrubbery},
						{"robotomy request", createRobotomy},
						{"presidential pardon", createPresidential}};
	
    for (int i = 0; i < 3; ++i) {
        if (formName == array[i].key) {
			std::cout << "Intern creates " << formName << std::endl;
			return array[i].make(target);
        }
    }
    std::cerr << "Intern couldn't find the form: " << formName << std::endl;
    return NULL;
}