/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 17:39:11 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/20 21:19:12 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat {
	private:
		Bureaucrat();
		int grade;
		const std::string name;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		
		int getGrade() const;
		std::string getName() const;
		void incrementGrade();
		void decrementGrade();
		
		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
};


std::ostream& operator<<(std::ostream& out, const Bureaucrat& other);