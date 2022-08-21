SRCS = 	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Floor.cpp \
		Ice.cpp \
		ICharacter.cpp \
		IMateriaSource.cpp \
		MateriaSource.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

NAME = interface

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean	all