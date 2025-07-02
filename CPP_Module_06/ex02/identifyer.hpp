/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:55:16 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/02 19:17:43 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFYER_HPP
#define IDENTIFYER_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif