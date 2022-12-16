NAME = push_swap


SRCS = push_swap.c handle_num.c check.c rotate.c push_a.c push_b.c swap.c reverse_rotate.c prepare.c ft_atoi.c ft_isdigit.c ft_putchar_fd.c ft_putstr_fd.c sorting.c


CC		= cc


RM		= rm -f


CFLAGS = -Wall -Wextra -Werror


$(NAME): ${OBJS}
		${CC} ${CFLAGS} $(SRCS) -o $(NAME)


all:	${NAME}


clean:
		${RM} ${OBJS}


fclean:	clean
		${RM} ${NAME}


re:		fclean all


.PHONY: all clean fclean re
