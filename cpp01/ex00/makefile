NAME=zombie

CC = c++ 

RM = rm -rf


CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC= NewZombie.cpp RandomChump.cpp Zombie.cpp main.cpp

OBJ=${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all

