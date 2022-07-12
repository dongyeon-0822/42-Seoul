NAME = libftprintf.a

CC = gcc

FLAG = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_funcs.c ft_printf_funcs2.c

OBJS = $(SRC:.c=.o)

INCLUDE = ft_printf.h

all: $(NAME)

$(NAME) : $(OBJS) $(INCLUDE)
	@ar rcs $(NAME) $(OBJS) $(INCLUDE)

%.o : %.c $(INCLUDE)
	@$(CC) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all