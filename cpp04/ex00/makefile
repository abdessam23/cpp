NAME=animal

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra --std=c++98

RM= rm -rf

SRC= animal.cpp Dog.cpp Cat.cpp main.cpp

OBJ=$(SRC:.cpp=.o)


all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all