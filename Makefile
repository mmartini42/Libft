NAME = libft.a

#find . -name "*.c" | tr '\n' ' '
SRCS = ./ft_atoi.c ./ft_memset.c ./ft_strlen.c ./ft_strlcat.c ./ft_bzero.c ./ft_memcpy.c ./ft_memccpy.c ./ft_memmove.c \
	./ft_memchr.c ./ft_memcmp.c ./ft_strdup.c ./ft_strcpy.c ./ft_strncpy.c ./ft_strcat.c ./ft_strncat.c ./ft_strchr.c \
	./ft_strrchr.c ./ft_strstr.c ./ft_strnstr.c ./ft_strcmp.c ./ft_strncmp.c ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c \
	ft_isascii.c ./ft_isprint.c ./ft_toupper.c ./ft_tolower.c ./ft_memalloc.c ./ft_memdel.c

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