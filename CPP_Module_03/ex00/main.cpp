/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:14:19 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 15:08:27 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap alpha("Alpha");
    ClapTrap beta("Beta");
	

    alpha.attack("Beta");
    beta.takeDamage(5);
    beta.beRepaired(3);
    beta.attack("Alpha");
    alpha.takeDamage(8);
    alpha.beRepaired(4);
	
    for (int i = 0; i < 11; ++i) {
        alpha.attack("Target");
    }

    return 0;
}