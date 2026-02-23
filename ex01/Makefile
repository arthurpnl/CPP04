NAME = a.out

SRCS = srcs/Animal.cpp srcs/Brain.cpp srcs/Cat.cpp srcs/Dog.cpp srcs/WrongAnimal.cpp srcs/WrongCat.cpp srcs/main.cpp
OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -I includes
CPP = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
