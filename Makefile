# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 15:11:32 by abdel-ke          #+#    #+#              #
#    Updated: 2021/07/08 20:51:24 by abdel-ke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_CH = checker

SRCS_BOTH =	libft/ft_putchar.c			\
			libft/ft_putstr.c			\
			libft/ft_strcmp.c			\
			libft/ft_putendl.c			\
			libft/ft_strlen.c			\
			libft/ft_strdup.c			\
			libft/ft_atoi.c				\
			struct.c					\
			push_swap_utils.c			\
			sort/sort_table.c			\
			sort/checker_args.c			\
			operations/swap.c			\
			operations/push.c			\
			operations/rotate.c			\
			operations/reverse_rotate.c

SRCS =		push_swap.c					\
			sort/sort_tree.c			\
			sort/sort_two.c				\
			sort/sort_five.c			\
			sort/sort_over_hundred.c	\
			sort/push_b.c				
# display.c					

SCRS_CH =	checker_bonus/ft_checker.c		\
			checker_bonus/get_next_line.c	
# checker/main.c

MAIN_CH =	checker_bonus/main.c

OBJ_DIR		=	./objs
OBJ_DIR_CH		=	./objs_ch
OBJ1 = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
OBJ2 = $(addprefix $(OBJ_DIR)/,$(SRCS_BOTH:.c=.o))
OBJ3 = $(addprefix $(OBJ_DIR)/,$(SCRS_CH:.c=.o))
OBJ  = $(OBJ1) $(OBJ2)
OBJ_CH = $(OBJ3) $(MAIN_CH)
CFLAGS = -Wall -Wextra -Werror

all: push_swap checker

push_swap: $(NAME) 

$(NAME) : $(OBJ)
	@gcc  $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[32m--------- successfully ---------\033[0m"

$(OBJ): $(OBJ_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	gcc -c $< -o $@
	
checker: $(NAME_CH)

$(NAME_CH) : $(OBJ_CH)
	@gcc  $(CFLAGS) $(OBJ_CH) -o $(NAME_CH)
	@echo "\n\033[32m--------- successfully ---------\033[0m"

$(OBJ_CH): $(OBJ_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	gcc  -c $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_CH)

re : fclean all

.PHONY: all clean fclean force