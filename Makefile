NAME = push_swap

NAME2 = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =  main.c push_swap.c \
		sort_lots.c sort_few.c sort.c \
		utils_1.c utils_2.c utils_checking.c utils_error.c utils_stack.c \
		operations_push.c operations_reverse.c operations_rotate.c operations_swap.c

SRCS2 = main_bonus.c checker_bonus.c \
		get_next_line_bonus.c get_next_line_utils_bonus.c \
		operations_push.c operations_reverse.c operations_rotate.c operations_swap.c \
		checker_utils_bonus.c utils_1.c utils_2.c utils_checking.c utils_error.c utils_stack.c

OBJS = $(SRCS:.c=.o)

OBJS2 = $(SRCS2:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME2): $(OBJS2)
	$(CC) $(CFLAGS) $(OBJS2) -o $(NAME2)

%.o: %.c push_swap.h checker_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME2)

clean:
	rm -f $(OBJS) $(OBJS2)

fclean: clean
	rm -f $(NAME) $(NAME2)

re: fclean all

.PHONY : all clean fclean re
