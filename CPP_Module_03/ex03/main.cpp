/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:14:19 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 18:24:55 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << "=== Creating DiamondTrap instance ===\n";
    DiamondTrap dt("Gem");

    std::cout << "\n=== Testing whoAmI() ===\n";
    dt.whoAmI();

    std::cout << "\n=== Testing attack (uses ScavTrap) ===\n";
    dt.attack("TargetX");

    std::cout << "\n=== Testing inherited behaviors ===\n";
    dt.takeDamage(20);
    dt.beRepaired(15);

    std::cout << "\n=== Testing FragTrap ability ===\n";
    dt.highFivesGuys();

    std::cout << "\n=== Testing ScavTrap ability ===\n";
    dt.guardGate();

    std::cout << "\n=== Testing energy depletion ===\n";
    for (int i = 0; i < 46; ++i) {
        dt.attack("Spam");
    }

    std::cout << "\n=== Testing copy constructor ===\n";
    DiamondTrap copyDt(dt);
    copyDt.whoAmI();
    copyDt.attack("CopyTarget");

    std::cout << "\n=== Testing assignment operator ===\n";
    DiamondTrap assignDt("Placeholder");
    assignDt = dt;
    assignDt.whoAmI();
    assignDt.attack("AssignedTarget");

    std::cout << "\n=== End of scope, destructors will run ===\n";
    return 0;
}
