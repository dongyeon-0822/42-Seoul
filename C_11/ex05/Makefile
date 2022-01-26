CC=gcc
CFLAGS= -Wall -Wextra -Werror
TARGET=do-op

SRCDIR=srcs
INCDIR=includes

SRCS=$(SRCSDIR)/*.c
OBJS=$(SRCS:.c=.o)
 
all: $(TARGET)
 
%.o : %.c
    $(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)
 
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^
 
clean:
    rm -f $(SRCSDIR)/*.o
