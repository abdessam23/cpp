NAME=AForm

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra  --std=c++98

RM=rm -rf

SRC=  ShrubberyCreationForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp  AForm.cpp main.cpp

OBJ= Bureaucrat.o AForm.o PresidentialPardonForm.o RobotomyRequestForm.o ShrubberyCreationForm.o main.o 

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)

re : fclean all


