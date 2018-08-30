CC      =       gcc

RM      =       rm -f

NAME    =       bsq

SRCS    =       main.c \
                display.c \
		count_col_lin.c \
		hunter_algo.c \
		fill_tabs.c \
		display_tab.c \
		get_len.c

OBJS    =	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) -lc_graph_prog
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
