NAME= DiamondTrap

CXX= c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

OBJ= ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o main.o 

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: clean all


