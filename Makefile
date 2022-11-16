NAME = push_swap


SRCS = push_swap.c handle_num.c swap_push.c check_num.c


CC		= cc


RM		= rm -f


CFLAGS = -Wall -Wextra -Werror


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
