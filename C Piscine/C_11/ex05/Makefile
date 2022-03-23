CC=gcc
CFLAGS= -Wall -Wextra -Werror
TARGET=do-op

.PHONY: clean all

all: 
	$(CC) $(CFLAGS) -o $(TARGET) do-op.c calc.c ft_func.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
