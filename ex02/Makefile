NAME	= animal

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLUDES = -I includes

SRCS	= srcs/main.cpp \
		  srcs/AAnimal.cpp \
		  srcs/Cat.cpp \
		  srcs/Dog.cpp \
		  srcs/Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re