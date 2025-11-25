NAME=Brain

<<<<<<< HEAD
CC=c++

CFLAGS= -Wall -Werror -Wextra --std=c++98

RM= rm -rf

SRC= animal.cpp Dog.cpp Cat.cpp Brain.cpp  main.cpp
=======
CXX=c++

CXXFLAGS= -Wall -Werror -Wextra --std=c++98

RM= rm -rf

SRC= AAnimal.cpp  Dog.cpp Cat.cpp Brain.cpp WrongCat.cpp  WrongAnimal.cpp main.cpp
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