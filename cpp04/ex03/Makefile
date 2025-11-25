NAME=AMateria

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra  -g --std=c++98

RM= rm -rf

SRC= AMateria.cpp Cure.cpp Ice.cpp  MateriaSource.cpp Character.cpp main.cpp

OBJ=$(SRC:.cpp=.o)


all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all