/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:56:37 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 19:50:58 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_head(t_stack *stack)
{
	while (stack->prev)
		stack = stack->prev;
	return (stack);
}

void	stock_args(t_data *data, char **av)
{
	int i;
	int j;
	int start;
	char *nbr;

	i = 1;
	data->a = NULL;
	data->b = NULL;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] && (av[i][j] == ' ' || av[i][j] == '\t'))
				j++;
			if (av[i][j])
			{
				start = j;
				while (av[i][j] >= '0' && av[i][j] <= '9')
					j++;
				nbr = ft_substr(av[i], start, j - start);
				lstadd_back(&data->a, lst_new(nbr));
				if (nbr)
					free(nbr);
			}
		}
		i++;
	}
}

int		check_arg(char **av, t_data *data)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] != ' ' && (av[i][j] < '0' || av[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	stock_args(data, av);
	if (sort_table(data) == 0)
		return (0);
	return (1);
}

void	ft_free(t_data *data)
{
	if (data->a)
		lstclear(&data->a, free);
	if (data->b)
		lstclear(&data->b, free);
	if (data->tab)
		free(data->tab);
	if (data->tab_a)
		free(data->tab_a);
	if (data->tab_b)
		free(data->tab_b);
	if (data)
		free(data);
}

void	caller(t_data *data)
{

	data->index_hundred = 0;
	// data->index_len = data->count_table / 5;
	// system("clear");
	// display(data);
	// if (data->count_table + 1 == 3)
	// 	tree_nembre(&data->a);
	// else if (data->count_table + 1 == 2)
	// 	sort_two(data->a);
	// else if (data->count_table + 1 >= 4 && data->count_table + 1 <= 5)
	// 	sort_five(data);
	// else if (data->count_table + 1 >= 6)
	// 	sort_over_hundred(data, 5);
	display(data);
}

void	init(t_data *data)
{
	data->tab = NULL;
	data->tab_a = NULL;
	data->tab_b = NULL;
	data->a = NULL;
	data->b = NULL;
	data->index_a = 0;
	data->index_b = 0;
}

void	display2(t_data *data)
{
		int i = 0;
		printf("A\t");
		while (i < data->index_a)
			printf("[%d]\t", data->tab_a[i++]);
		puts("");
		i = 0;
		printf("B\t");
		while (i < data->index_b)
			printf("|%d|\t", data->tab_b[i++]);
		puts("");
}

int main(int ac, char **av)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	init(data);
	if (!check_arg(av, data))
		ft_putstr("Error\n");
	else
		// caller(data);
	display2(data);
	ft_free(data);
}
