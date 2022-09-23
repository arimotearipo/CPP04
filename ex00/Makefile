SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

MAIN = main.cpp

OBJS = $(SRCS:.cpp=.o) main.o

HEADERS = $(SRCS:.cpp=.hpp)

CC = c++ -std=c++98

FLAGS = -Wall -Werror -Wextra -fsanitize=address

NAME = polymorphism

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(SRCS) $(MAIN) $(HEADERS)
			$(CC) $(FLAGS) $(SRCS) $(MAIN) -c

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

l:			all
			./polymorphism