# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 22:22:34 by nhimad            #+#    #+#              #
#    Updated: 2025/07/16 15:44:36 by nhimad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

C = c++
FLAGS = -Wall -Wextra -Werror -std=c++11

SRCS = main.cpp BitcoinExchange.cpp
HEADER = BitcoinExchange.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(FLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp $(HEADER)
	$(C) $(FLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all