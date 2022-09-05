NAME = push_swap

SRC = check.c clear.c convert.c index.c sort_smaller_list.c \
	top_five_arg.c top_five_arg_continuation.c rotate.c rotate2.c \
	push.c swap.c reverse_rotate.c reverse_rotate2.c ft_split.c ft_strlen.c ft_substr.c double_to_half.c sort_the_list.c sort_the_list2.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./ft_printf
	$(CC) $(CFLAGS) $(SRC) ./ft_printf/libftprintf.a main.c -o $(NAME)


clean:
	rm -rf $(OBJ)
	rm -rf main.o
	make -C ./ft_printf clean

fclean: clean
	rm -rf $(OBJ) $(NAME)
	make -C ./ft_printf fclean

re: fclean all

.PHONY: all re clean fclean 
