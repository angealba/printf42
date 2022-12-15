NAME = libftprintf.a

SRC = ft_printchar.c ft_printstr.c ft_strlen.c ft_printnbr.c ft_printunsnbr.c\
	  ft_printhex.c ft_printhex_up.c ft_printptr.c ft_printf.c

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "printf compiled"

%.o : %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
