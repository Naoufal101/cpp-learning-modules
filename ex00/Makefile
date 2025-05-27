# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: YourName <your.email@example.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 16:03:07 by YourName          #+#    #+#              #
#    Updated: 2025/05/08 16:03:07 by YourName         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

C = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp
HEADER = Bureaucrat.hpp

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