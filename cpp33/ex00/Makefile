NAME= ClapTrap

CXX= c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC= ClapTrap.cpp  main.cpp
OBJ= ClapTrap.o main.o


all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)


clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: clean all

