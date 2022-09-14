SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp

MAIN = main.cpp

OBJS = $(SRCS:.cpp=.o) main.o

HEADERS = $(SRCS:.cpp=.hpp)

CC = c++ -std=c++98

FLAGS = -Wall -Werror -Wextra

NAME = polymorphism

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(MAIN) $(SRCS)
			$(CC) $(FLAGS) $(MAIN) $(SRCS) -c

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all