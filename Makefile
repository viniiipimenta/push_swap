NAME = push_swap


SRCS = push_swap.c handle_num.c check.c rotate.c push_a.c push_b.c swap.c reverse_rotate.c prepare.c sorting.c sort_big.c


CC		= cc


RM		= rm -f


CFLAGS = -Wall -Wextra -Werror -g


$(NAME): ${OBJS}
		make -C ./libft
		${CC} ${CFLAGS} ./libft/libft.a $(SRCS) -o $(NAME)


all:	${NAME}


clean:
		${RM} ${OBJS}
		make clean -C ./libft


fclean:	clean
		${RM} ${NAME}
		make fclean -C ./libft


re:		fclean all
		make re -C ./libft


.PHONY: all clean fclean re
