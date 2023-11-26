SRC = ft_printf.c \
	./src/ft_printchar.c \
	./src/ft_printstr.c \
	./src/ft_printptr.c \
	./src/ft_printnbr.c \
	./src/ft_itoa.c \
	./src/ft_utoa_base.c \
	./src/ft_printhex.c \
	./src/ft_printunsigned.c

NAME = libftprintf.a
OBJ = $(SRC:.c=.o)
CC = cc
RM = rm -rf
ARC = ar -rcs
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(ARC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
