NAME= convert

CXX= c++

CXXFLAGS= -Wall -Wextra -Werror --std=c++98

RM = rm -rf 
SRC= ScalarConverter.cpp main.cpp 

OBJ=ScalarConverter.o main.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all