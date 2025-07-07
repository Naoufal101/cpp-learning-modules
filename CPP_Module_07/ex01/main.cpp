/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:02:35 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/07 15:42:02 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int arr [] = {1336, 41};
    
    std::cout << "use iter with array of int:" << std::endl;
    ::iter(arr, 2, displayElement);

    ::iter(arr, 2, increment);

    std::cout << "\nAfter increment:" << std::endl;
    ::iter(arr, 2, displayElement);

	std::cout << "\nuse iter with array of string:" << std::endl;
    std::string strs[] = {"One", "Two", "three"};
    ::iter(strs, 3, displayElement);

    return 0;
}