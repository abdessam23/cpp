NAME=RPN

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98

RM = rm -rf
SRC= RPN.cpp main.cpp

OBJ = RPN.o main.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ)  -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all re