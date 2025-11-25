<<<<<<< HEAD
NAME= Harl

CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98

RM= rm -rf

SRC= main.cpp

OBJ=$(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)

re: fclean all

=======
NAME=Harl

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
>>>>>>> master
