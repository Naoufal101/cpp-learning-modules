/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:31:44 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/27 19:08:47 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat	mowadaf("mkadim", 1);
		Bureaucrat	wali = mowadaf;
		Form		rokhssa("xahadat lhayat", 1, 150);
		
		std::cout << rokhssa;
		wali.decrementGrade();
		wali.incrementGrade();
		wali.signForm(rokhssa);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}