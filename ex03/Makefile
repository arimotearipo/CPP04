SRCS = AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

MAIN = main.cpp

OBJS = $(SRCS:.cpp=.o) main.o

HEADER = $(SRCS:.cpp=.hpp) ICharacter.hpp IMateriaSource.hpp

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

NAME = finalfantasy

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(SRCS) $(MAIN) $(HEADER)
			$(CC) $(FLAGS) $(SRCS) $(MAIN) -c

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

l:			all
			./finalfantasy