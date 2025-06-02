CC = c++
SRC_FILES = main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = Brain

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