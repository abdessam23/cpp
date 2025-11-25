NAME=Fixed

CC=c++

CFLAGS= -Wall -Werror -Wextra -std=c++98

RM=rm -rf

SRC= Fixed.cpp Point.cpp bsp.cpp main.cpp


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all
