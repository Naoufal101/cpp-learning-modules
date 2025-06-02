/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:14:19 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 16:02:47 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    std::cout << "=== Creating FragTrap instances ===\n";
    FragTrap f1("Foxy");
    FragTrap f2(f1);

    std::cout << "\n=== Testing attack (overridden) ===\n";
    f1.attack("Target1");
    f2.attack("Target2");

    std::cout << "\n=== Testing highFivesGuys (unique ability) ===\n";
    f1.highFivesGuys();
    f2.highFivesGuys();

    std::cout << "\n=== Testing takeDamage & beRepaired (inherited) ===\n";
    f1.takeDamage(40);
    f1.beRepaired(25);

    std::cout << "\n=== Testing energy depletion ===\n";
    for (int i = 0; i < 105; ++i) {
        f1.attack("Spam");
    }

    std::cout << "\n=== Testing assignment operator ===\n";
    FragTrap f3("Dummy");
    f3 = f2;
    f3.attack("AssignedTarget");

    std::cout << "\n=== End of scope, destructors will run ===\n";
    return 0;
}
