/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:14:08 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/06 16:19:26 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoint;
		int			attackDamage;
	
	public:
		ClapTrap();
    	ClapTrap(const std::string& name);
    	ClapTrap(const ClapTrap& other);
    	ClapTrap& operator=(const ClapTrap& other);
    	~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif