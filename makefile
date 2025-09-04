NAME=ex01
CC=c++ 
CFLAGS= -Wall -Werror -Wextra -std=c++98
RM= rm -rf
SRC=ex01.cpp

OBJ={$(SRC):.cpp=.o}

all:$(NAME)

$(NAME): $(OBJ)
 	$(CC) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all