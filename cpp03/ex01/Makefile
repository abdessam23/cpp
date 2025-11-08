NAME= scavtrap

CXX= c++

CXXFLAGS= -Wall -Werror -Wextra #-std=c++98

RM = rm -rf

SRC= ClapTrap.cpp ScavTrap.cpp main.cpp
OBJ= ClapTrap.o ScavTrap.o main.o


all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

