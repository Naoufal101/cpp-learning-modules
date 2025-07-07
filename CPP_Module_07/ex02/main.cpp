/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:13:51 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/07 19:08:04 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); ++i) arr[i] = i * 3;

    Array<int> b = arr;
    arr[0] = 99;

    std::cout << "arr[0] = " << arr[0] << ", b[0] = " << b[0] << std::endl;

    Array<std::string> sa(3);
    sa[0] = "foo"; sa[1] = "bar"; sa[2] = "baz";
    for (unsigned int i = 0; i < sa.size(); ++i) std::cout << sa[i] << " ";
    std::cout << std::endl;

    try {
        std::cout << arr[10];
    } catch(const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
