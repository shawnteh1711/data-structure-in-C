NAME		:= linked_list
# CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra -g3 -fsanitize=address
SRCS		= main.c transverse_list.c add_node.c delete_node.c \
				reverse.c
OBJS		= $(SRCS:.c=.o)

# Colors
GREEN		=\033[1;33m
RED			=\033[1;32m

all			: $(NAME)

$(NAME)		: $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re