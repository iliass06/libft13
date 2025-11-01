NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
