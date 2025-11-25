NAME=animal

<<<<<<< HEAD
CC=c++

CFLAGS= -Wall -Werror -Wextra --std=c++98

RM= rm -rf

SRC= animal.cpp Dog.cpp Cat.cpp main.cpp
=======
CXX=c++

CXXFLAGS= -Wall -Werror -Wextra --std=c++98

RM= rm -rf

SRC= animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
>>>>>>> master

OBJ=$(SRC:.cpp=.o)


all:$(NAME)

$(NAME): $(OBJ)
<<<<<<< HEAD
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $<  -o $@
=======
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
>>>>>>> master

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all