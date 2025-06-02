/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:14:19 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 15:47:52 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Creating ScavTrap instances ===\n";
    ScavTrap a("Alpha");
    ScavTrap b("Bolt");
	
    std::cout << "\n=== Testing attack & guardGate ===\n";
    a.attack("TargetA");
    b.attack("TargetB");
    a.guardGate();
    a.guardGate();

    std::cout << "\n=== Testing takeDamage & beRepaired (inherited) ===\n";
    b.takeDamage(30);
    b.beRepaired(20);

    std::cout << "\n=== Testing energy depletion ===\n";
    for (int i = 0; i < 55; ++i) {
        b.attack("Spam");
    }

    std::cout << "\n=== Testing copy constructor ===\n";
    ScavTrap c(b);
    c.attack("CopyTarget");

    std::cout << "\n=== Testing assignment operator ===\n";
    ScavTrap d("Dummy");
    d = c;
    d.attack("AssignedTarget");

    std::cout << "\n=== End of scope, destructors will run ===\n";
    return 0;
}
