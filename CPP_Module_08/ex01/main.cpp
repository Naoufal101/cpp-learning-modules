/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:41:12 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/15 15:41:13 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
 {
   try {
      Span sp = Span(11005);
      sp.addNumber(6);
      sp.addNumber(3);
      sp.addNumber(17);
      sp.addNumber(9);
      sp.addNumber(11);

      std::cout << sp.shortestSpan() << std::endl;
      std::cout << sp.longestSpan() << std::endl;

      std::list<int> l;
      for (int i = 0; i < 11000; i++) {
         l.push_back(rand() % INT_MAX);
      }

      sp.addNumber(l.begin(), l.end());
      std::cout << "----after adding a big list of numbers----\n";
      std::cout << sp.shortestSpan() << std::endl;
      std::cout << sp.longestSpan() << std::endl;
   }
   catch (std::exception &e) {
      std::cout << e.what() << std::endl;
   }
    return 0;
 }