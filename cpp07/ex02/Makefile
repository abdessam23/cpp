NAME=array

CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -g --std=c++98

RM=rm -rf

SRC=  main.cpp

OBJ= main.o


all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: re clean fclean all 