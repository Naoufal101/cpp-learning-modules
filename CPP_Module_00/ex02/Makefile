# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 22:22:38 by nhimad            #+#    #+#              #
#    Updated: 2025/03/19 22:22:39 by nhimad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
SRC_FILES = Account.cpp tests.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = printlogs

all : $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ_FILES)

fclean : clean
	$(RM) $(NAME)

re: fclean all