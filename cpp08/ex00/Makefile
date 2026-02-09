NAME=Easyfind

CXX=c++

CXXFLAGS= -Wall -Wextra -Werror 

RM=rm -rf

SRC= main.cpp

OBJ= main.o

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)

re: fclean all	