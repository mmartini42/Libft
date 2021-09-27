NAME = libft.a

#find . -name "*.c" | tr '\n' ' '
SRCS = ./ft_atoi.c

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

%.o: %.c
	gcc ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
	ar rcs $@ ${OBJS}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re