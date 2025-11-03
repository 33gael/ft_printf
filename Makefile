CFILES = $(wildcard *.o)

OBJ = $(CFILES:.c=.o)

srcs = srcs/

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	cc	-c $(CFLAGS) -I $(INC) $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all