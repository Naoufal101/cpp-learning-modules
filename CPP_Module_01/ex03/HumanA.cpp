/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:48:00 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/22 20:27:41 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() {
	std::cout << name << " attacks with their "
	<< weaponType.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &WeaponTy) : weaponType(WeaponTy){
	this->name = name;
};
