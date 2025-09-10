NAME= zombie

CC= c++

CFLAGS= -Wall -Werror -Wexta -std=c++98

RM= rm -rf

SRC= newZombie.cpp randomChump.cpp main.cpp

OBJ= $(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
