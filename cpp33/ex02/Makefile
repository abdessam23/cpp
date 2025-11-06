NAME= FragTrap

CC= c++

CFLAGS=-Wall -Werror -Wextra  -std=c++98

RM = rm -rf

SRC= ClapTrap.cpp FragTrap.cpp main.cpp

all:$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all

