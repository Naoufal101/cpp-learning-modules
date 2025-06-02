CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC_FILES = main.cpp replaceAll.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
HEADER = replaceAll.hpp
NAME = replace

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
