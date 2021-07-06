/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:03:21 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 18:45:05 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef	struct s_stack
{
	int				nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

typedef struct s_data
{
	t_stack		*a;
	t_stack		*b;
	int			*tab_sorted;
	int			*tab;
	int			*tab_a;
	int			index_a;
	int			*tab_b;
	int			index_b;
	int			index_hundred;
	int			count_table;
}				t_data;

/*	libft	*/
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(char *str);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* struct */
void	lstadd_back(t_stack **alst, t_stack *new);
t_stack		*lst_new(char *str);
t_stack		*lst_new2(int nbr);
void	lstdelone(t_stack *lst, void (*del)(void*));
void	lstclear(t_stack **lst, void (*del)(void*));
void	ft_lstadd_front(t_stack **alst, t_stack *new);
t_stack	*get_head(t_stack *stack);

/*	autres	*/
void	display(t_data *data);
void	caller(t_data *data);
int		get_last(t_stack *stack);
void	push_to_list(t_data *data, char **av);
int		sort_table(t_data *data);


/*operation */ 
void	sa(t_data *data);
void	sb(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
#endif
