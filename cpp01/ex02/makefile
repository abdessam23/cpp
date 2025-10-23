NAME=ex02

CC = c++ 

RM = rm -rf

CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC= main.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


clean:
	$(RM) $(NAME)

re: clean all