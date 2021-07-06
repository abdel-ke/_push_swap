# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 15:11:32 by abdel-ke          #+#    #+#              #
#    Updated: 2021/07/06 18:46:37 by abdel-ke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	libft/ft_putchar.c			\
		libft/ft_putstr.c			\
		libft/ft_putendl.c			\
		libft/ft_strlen.c			\
		libft/ft_strdup.c			\
		libft/ft_isdigit.c 			\
		libft/ft_atoi.c				\
		libft/ft_itoa.c				\
		libft/ft_split.c			\
		libft/ft_strjoin.c			\
		libft/ft_substr.c			\
		struct.c					\
		display.c					\
		push_swap.c					\
		sort/sort_table.c			\
		operations/swap.c			\
		operations/push.c			\
		operations/rotate.c			\
		operations/reverse_rotate.c	\
		# sort/sort_two.c				\
		# sort/sort_tree.c			\
		# sort/sort_five.c			\
		# sort/checker.c				\
		# sort/sort_over_hundred.c	\
		# sort/push_b.c				\

OBJ_DIR		=	./objs
OBJ = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
CFLAGS = #-Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	@gcc -g $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[32m--------- successfully ---------\033[0m"

$(OBJ): $(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc -g -c $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean force