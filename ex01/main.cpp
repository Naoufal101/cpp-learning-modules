/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:31:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/24 18:44:39 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat general("khaftar", 3);
	Form wati9a("ro5ssa", 2, 1);

	try
	{
		//Bureaucrat ana("boya", -1);
		general.incrementGrade();
		general.signForm(wati9a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << general << std::endl;
}