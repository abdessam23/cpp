
NAME= FragTrap

CXX= c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC= ClapTrap.cpp FragTrap.cpp main.cpp

OBJ= ClapTrap.o FragTrap.o main.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
re: clean all

