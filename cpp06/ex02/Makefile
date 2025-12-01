NAME=base

CXX=c++

CXXFLAGS= -Wall -Wextra -Werror --std=c++98

RM= rm -rf

SRC=Typeinfo.cpp Base.cpp main.cpp

OBJ=Typeinfo.o Base.o main.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re


