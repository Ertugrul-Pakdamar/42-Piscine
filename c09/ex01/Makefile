CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes
SRCS = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strcmp.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_swap.c
OBJS = $(SRCS:.c=.o)

all: libft.a

%.o: %.c	
	${CC} ${FLAGS} -c $< -o $@ -I ${INCDIR}

libft.a: ${OBJS}
	ar -rc $@ ${OBJS}
	ranlib libft.a

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf libft.a

re:			fclean all

.PHONY:		all clean fclean re