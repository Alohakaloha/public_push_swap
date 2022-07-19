CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

MAIN =	./src/main.c \
		./src/input/checkinput_int.c \
		./src/input/checkinput_str.c \
		./src/input/str_arg.c \
		./src/input/error.c \
		./src/input/errorcheck.c \
		./src/index.c \
		./src/init_stack.c \
		./src/radix.c \
		./src/list_functions.c \
		./src/print_list.c \
		./src/utils.c \
		./src/sort_small/sort_small.c \
		./src/sort_small/sort_3.c \
		./src/sort_small/sort_4.c \
		./src/sort_small/sort_5.c \
		./src/sort_small/sort_small_utils.c \
		./src/operations/swap.c \
		./src/operations/push.c \
		./src/operations/rotate.c \
		./src/operations/reverse_rotate.c \

OBJS = ${SOURCES:.c=.o}

LIBFT = libft
LIBFT_NAME = libft.a

$(NAME)	:	$(SOURCES)
	@make  -sC ./libft
	@echo "Compiling push_swap..."
	$(CC) $(CFLAGS) $(MAIN) $(SOURCES) -L$(LIBFT) -lft -g -o $(NAME)

all: $(NAME)

clean:
	@make clean -sC ./libft
	@echo "Removing object files..."
	@rm -f ${OBJS}

fclean:	clean
	@make fclean -sC ./libft
	@echo "Removing push_swap..."
	@rm -f ${NAME}

re:	fclean all

re_bonus:	fclean bonus

.PHONY:	clean fclean re re_bonus