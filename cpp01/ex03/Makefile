NAME=War

CC = c++ 

RM = rm -rf

CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC= HumanB.cpp HumanA.cpp Weapon.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


clean:
	$(RM) $(NAME)

re: clean all