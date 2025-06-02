/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:12:49 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/27 18:02:48 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat mkadim("Simo", 1);
		Bureaucrat wali = mkadim;
		
		wali.decrementGrade();
		std::cout << mkadim;
		std::cout << wali;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}