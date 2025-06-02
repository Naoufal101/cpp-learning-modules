CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRC_FILES = Harl.cpp main.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
HEADER = Harl.hpp
NAME = harlFilter

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
