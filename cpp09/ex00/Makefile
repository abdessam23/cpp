NAME=bitcoinexchange

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98

RM = rm -rf
SRC= BitcoinExchange.cpp main.cpp

OBJ = BitcoinExchange.o main.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ)  -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all re