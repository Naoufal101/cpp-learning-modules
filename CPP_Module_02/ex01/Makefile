CC = c++
SRC_FILES = Fixed.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Fixed.hpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
NAME = a.out

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