/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceAll.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:21:15 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/23 16:26:26 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEALL_HPP
#define REPLACEALL_HPP

#include <fstream>
#include <iostream>

void replaceAll(std::ifstream &input, std::ofstream &outFile,
 std::string &s1, std::string &s2);
#endif