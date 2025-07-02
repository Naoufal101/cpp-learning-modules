/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:06:13 by nhimad            #+#    #+#             */
/*   Updated: 2025/06/27 16:03:31 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int arc, char **argv) {
	if (arc == 2) {
		std::string str = argv[1];
		ScalarConverter::convert(str);
	}
}