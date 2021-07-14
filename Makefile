# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 15:11:32 by abdel-ke          #+#    #+#              #
#    Updated: 2021/07/14 16:02:32 by abdel-ke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_B = checker

SRCS =	libft/ft_putchar.c			\
		libft/ft_putstr.c			\
		libft/ft_putendl.c			\
		libft/ft_strlen.c			\
		libft/ft_strdup.c			\
		libft/ft_atoi.c				\
		libft/ft_strjoin.c			\
		libft/ft_substr.c			\
		libft/ft_strchr.c			\
		struct.c					\
		push_swap_utils.c			\
		push_swap.c					\
		sort/sort_table.c			\
		operations/swap.c			\
		operations/push.c			\
		operations/rotate.c			\
		operations/reverse_rotate.c	\
		sort/sort_tree.c			\
		sort/sort_two.c				\
		sort/sort_five.c			\
		sort/sort_over_hundred.c	\
		sort/push_b.c				\
		sort/checker_args.c			
		
SRCS_B = libft/ft_putchar.c			\
		libft/ft_putstr.c			\
		libft/ft_putendl.c			\
		libft/ft_strcmp.c			\
		libft/ft_strlen.c			\
		libft/ft_strdup.c			\
		libft/ft_atoi.c				\
		libft/ft_strjoin.c			\
		libft/ft_substr.c			\
		libft/ft_strchr.c			\
		struct.c					\
		push_swap_utils.c			\
		sort/sort_table.c			\
		operations/swap.c			\
		operations/push.c			\
		operations/rotate.c			\
		operations/reverse_rotate.c	\
		sort/checker_args.c			\
		checker_bonus/ft_checker.c \
		checker_bonus/get_next_line.c \
		checker_bonus/main.c  

OBJ_DIR		=	./objs
OBJ_DIR_B		=	./objs_b
OBJ = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
OBJ_B = $(addprefix $(OBJ_DIR_B)/,$(SRCS_B:.c=.o))
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	@gcc -g $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[32m--------- PUSH_SWAP SUCCESSFUL ---------\033[0m"

$(OBJ): $(OBJ_DIR)/%.o: %.c push_swap.h
	@mkdir -p $(dir $@)
	gcc -c $< -o $@

$(OBJ_B): $(OBJ_DIR_B)/%.o: %.c push_swap.h
	@mkdir -p $(dir $@)
	gcc -c $< -o $@

$(NAME_B) : $(OBJ_B)
	@gcc -g $(CFLAGS) $(OBJ_B) -o $(NAME_B)
	@echo "\n\033[32m--------- BONUS SUCCESSFUL ---------\033[0m"

bonus: $(OBJ_B) $(NAME_B)

clean :
	@rm -rf $(OBJ_DIR)
	@rm -rf $(OBJ_DIR_B)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_B)

re : fclean all
