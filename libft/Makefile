SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c \
ft_tolower.c ft_atoi.c ft_strdup.c ft_strlcpy.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putnbr_fd.c
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstadd_back.c ft_lstsize.c ft_lstiter.c ft_lstclear.c
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
NAME = libft.a
INC=libft.h
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
LIBR = ranlib

all: ${NAME}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ}
	${LIBR} ${NAME}

.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

bonus: ${OBJ_BONUS}
	${LIBC} ${NAME} ${OBJ_BONUS}
	${LIBR} ${NAME}

clean:
	${RM} ${OBJ}
	${RM} ${OBJ_BONUS}

fclean: clean
	${RM} ${NAME}
	${RM} libft.so
	${RM} a.out

re: fclean all

.PHONY:
	all clean fclean re
