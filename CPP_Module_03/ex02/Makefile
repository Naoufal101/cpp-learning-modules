CC = c++
SRC_FILES = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = ClapTrap

all : $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ_FILES)

fclean : clean
	$(RM) $(NAME)

re: fclean all