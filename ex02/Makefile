SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -std=c++98

FLAGS = -Wall -Werror -Wextra

NAME = polymorphism

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all