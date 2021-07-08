/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:03:21 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/08 18:15:30 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE -1
# endif

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

typedef struct s_data
{
	t_stack		*a;
	int			*tab;
	int			*stack_a;
	int			index_a;
	int			*stack_b;
	int			index_b;
	int			count_table;
}				t_data;

/*	libft	*/
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putendl(char *str);
long long	ft_atoi(const char *str);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *s);
int			ft_strcmp(char *s1, char *s2);

/* get_next_line */
int			is_n(char *str);
char		*ft_strjoin(char *str1, char *str2);
char		*my_strcut(char *str, int n);
int			fill_line(char **content, char **line);
int			get_next_line(char **line);

/* struct */
void		lstadd_back(t_stack **alst, t_stack *new);
t_stack		*lst_new2(int nbr);
void		lstdelone(t_stack *lst, void (*del)(void*));
void		lstclear(t_stack **lst, void (*del)(void*));
void		ft_lstadd_front(t_stack **alst, t_stack *new);
t_stack		*get_head(t_stack *stack);
void		ft_free(t_data *data);

/*	autres	*/
void		display(t_data *data);
void		caller(t_data *data);
int			get_last(t_stack *stack);
void		push_to_list(t_data *data, char **av);
int			sort_table(t_data *data);
int			stock_args(t_data *data, char **av);
void		init(t_data *data);

/*operation */
void		sa(t_data *data, int print);
void		sb(t_data *data, int print);
void		pa(t_data *data, int print);
void		pb(t_data *data, int print);
void		ra(t_data *data, int print);
void		rb(t_data *data, int print);
void		rra(t_data *data, int print);
void		rrb(t_data *data, int print);

/* checker */
int			check_is_in(t_data *data, int start, int end, int index);
int			check_arg_util(char *str, int pos);
int			check_arg(char **av, t_data *data);
void		get_instriction(t_data *data, char *line);

/* sort */
/* 2 */
void		sort_two(t_data *data);
void		reverse_two(t_data *data);
/* 3 */
void		tree_nembre(t_data *data, int f_value, int s_value, int l_value);
void		reverse_tree_nbr(t_data *data, int f_value,
				int s_value, int l_value);
/* 5 */
void		sort_five(t_data *data, int first_pos, int last_pos);
/* 100 */
void		sort_over_hundred(t_data *data, int divid, int i, int k);
void		check_b(t_data *data);
#endif
