/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:09:25 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/24 16:04:11 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int arc, char **arv) {
	if (arc != 2) {
		std::cout << "Invaled number of argument" << std::endl;
		return (1);
	}
	Harl cry;
	cry.complain(arv[1]);	
}