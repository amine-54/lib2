NAME = libft.a
SRC = $(wildcard *.c)
OBJECTS = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
all: $(NAME)
clean:
	rm -f *.o
fclean:
	rm -f *.o $(NAME)
re: fclean all
