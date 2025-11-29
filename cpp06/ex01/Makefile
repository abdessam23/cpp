NAME=Serializer

CXX=c++		
CXXFLAGS= -Wall -Wextra -Werror --std=c++98

RM= rm -rf 

SRC= Serializer.cpp main.cpp

OBJ=Serializer.o main.o

all:

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)


re: fclean all