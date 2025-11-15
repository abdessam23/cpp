NAME=Bureaucrat

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra  -g --std=c++98

RM= rm -rf

SRC= Bureaucrat.cpp main.cpp

OBJ= Bureaucrat.o main.o 

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re : fclean all


