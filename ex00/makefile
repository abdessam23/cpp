NAME= ex00
CC=c++ 
CFLAGS= -Wall -Werror -Wextra -std=c++98
RM= rm -rf
SRC=ex00.cpp

OBJ=$(SRC:.cpp=.o)

all:$(NAME)



$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all