CC = c++
SRC_FILES = Zombie.cpp main.cpp zombieHorde.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Zombie.hpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = Zombie

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