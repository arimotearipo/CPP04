SRCS = AMateria.cpp ICharacter.cpp Ice.cpp

MAIN = main.cpp

OBJS = $(SRCS:.cpp=.o) main.o

HEADER = $(SRCS:.cpp=.hpp)

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror -fsanitize=address

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