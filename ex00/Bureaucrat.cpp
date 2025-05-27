/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:06:38 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/20 21:29:57 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Parameterized Constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : grade(grade), name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

//copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name){
	*this = other;
}

//assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		grade = other.grade;
	}
	return *this;
}

// grade getter
int Bureaucrat::getGrade() const {
	return grade;
}

//Name getter
std::string Bureaucrat::getName() const {
	return name;
}

void Bureaucrat::incrementGrade() {
	if (grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	--grade;
}

void Bureaucrat::decrementGrade() {
	if (grade >= 150 )
		throw GradeTooLowException();
	++grade;
}

//Custom exceptions message
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const  throw() {
	return "Error: Grade is too low.";
}

//insertion operator
std::ostream& operator<<(std::ostream& out, const Bureaucrat& other) {
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return out;
}