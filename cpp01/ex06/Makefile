NAME=HarlFilter

CC = c++ 

RM = rm -rf

CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC= Harl.cpp  main.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all