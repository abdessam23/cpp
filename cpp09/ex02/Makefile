NAME=PmergeMe

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra 

RM = rm -rf
SRC= PmergeMe.tpp PmergeMe.cpp main.cpp

OBJ = PmergeMe.o main.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ)  -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all re
