NAME = Game

C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Ice.cpp MateriaSource.cpp AMateria.cpp Character.cpp Cure.cpp \
       main.cpp

HEADER = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp \
        IMateriaSource.hpp Ice.hpp MateriaSource.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp $(HEADER)
	$(C) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all