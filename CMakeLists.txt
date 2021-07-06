cmake_minimum_required(VERSION 3.15)
project(l3adab_m3a_push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(l3adab_m3a_push_swap
        libft/ft_atoi.c
        libft/ft_isdigit.c
        libft/ft_itoa.c
        libft/ft_putchar.c
        libft/ft_putendl.c
        libft/ft_putstr.c
        libft/ft_split.c
        libft/ft_strdup.c
        libft/ft_strjoin.c
        libft/ft_strlen.c
        libft/ft_substr.c
        sort/sort_table.c
        display.c
        push_swap.c
        push_swap.h
        struct.c)
