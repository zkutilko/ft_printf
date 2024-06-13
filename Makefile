SRC = ft_printf.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
INC = ft_printf.h
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
LIBR = ranlib
LIBFT = ./libft/libft.a

.c.o:
		cc ${CFLAGS} -c $< -o ${<:.c=.o} -I .

all: ${NAME}

${NAME}: ${OBJ}
		make -C ./libft
		cp ${LIBFT} ${NAME}
		${LIBC} ${NAME} ${OBJ}

clean:
		make clean -C ./libft
		${RM} ${NAME}
		${RM} ${OBJ}

fclean: clean
		make fclean -C ./libft
		${RM} ${NAME}
		${RM} a.out

re: fclean all

.PHONY:
		all clean fclean re
