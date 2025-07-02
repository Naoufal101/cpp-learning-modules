# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/22 13:57:55 by nhimad            #+#    #+#              #
#    Updated: 2025/07/02 15:18:19 by nhimad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Serializer

C = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Serializer.cpp 
HEADER = Serializer.hpp

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