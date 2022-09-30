NAME = push_swap

SRCS = push_swap.c

OBJS = ${SRCS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} ./libft/libft.a -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}


all:	${NAME}
	make -C ./libft

clean:
		${RM} ${OBJS}
		make clean -C ./libft

fclean:	clean
		${RM} ${NAME}
		make fclean -C ./libft

re:		fclean all
		make re -C ./libft

.PHONY: all clean fclean re
