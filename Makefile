SRC = ft_printf.c ft_check_c.c ft_check_s.c ft_check_d.c ft_check_u.c ft_check_x.c ft_check_p.c ft_check_per.c
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
