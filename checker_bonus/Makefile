# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 15:11:32 by abdel-ke          #+#    #+#              #
#    Updated: 2021/07/08 19:54:38 by abdel-ke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker


SRCS=			ft_checker.c					\
				get_next_line.c					\
				main.c							\
				../libft/ft_putchar.c			\
				../libft/ft_putstr.c			\
				../libft/ft_putendl.c			\
				../libft/ft_strlen.c			\
				../libft/ft_strdup.c			\
				../libft/ft_atoi.c				\
				../libft/ft_strcmp.c			\
				../struct.c						\
				../push_swap_utils.c			\
				../sort/sort_table.c			\
				../operations/swap.c			\
				../operations/push.c			\
				../operations/rotate.c			\
				../operations/reverse_rotate.c	\
				../sort/checker_args.c			\

OBJ_DIR		=	./objs
OBJ = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
CFLAGS = -Wall -Wextra -Werror
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
	@rm -rf libft operations sort push_swap_utils.o struct.o

re : fclean all

.PHONY: all clean fclean force