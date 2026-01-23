NAME=PmergeMe

CXX=c++

CFLAGS= -Wall -Werror -Wextra -std=c++98

RM = rm -rf
SRC= PmergeMe.cpp main.cpp

OBJ = PmergeMe.o main.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all re
