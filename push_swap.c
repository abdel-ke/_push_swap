/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:56:37 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 19:39:55 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stock_args(t_data *data, char **av)
{
	int		i;
	int		j;
	int		start;
	int		nbr;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] && (av[i][j] == ' ' || av[i][j] == '\t'))
				j++;
			nbr = ft_atoi(av[i] + j);
			if (av[i][j] == '-')
				j++;
			while (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
			lstadd_back(&data->a, lst_new2(nbr));
		}
		i++;
	}
}

void	ft_free(t_data *data)
{
	if (data->a)
		lstclear(&data->a, free);
	if (data->stack_a)
		free(data->stack_a);
	if (data->tab)
		free(data->tab);
	if (data->stack_b)
		free(data->stack_b);
	if (data)
		free(data);
}

void	caller(t_data *data)
{
	if (data->count_table == 3)
		tree_nembre(data, data->stack_a[0], data->stack_a[1], data->stack_a[2]);
	else if (data->count_table == 2)
		sort_two(data);
	else if (data->count_table >= 4 && data->count_table <= 5)
		sort_five(data, 0, 0);
	else if (data->count_table >= 6 && data->count_table <= 99)
		sort_over_hundred(data, 5, 0, 0);
	else if (data->count_table >= 100 && data->count_table <= 500)
		sort_over_hundred(data, 13, 0, 0);
}

void	init(t_data *data)
{
	data->a = NULL;
	data->index_a = 0;
	data->index_b = 0;
}

int	main(int ac, char **av)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	init(data);
	if (!check_arg(av, data))
		ft_putstr("Error\n");
	else
		caller(data);
	//display(data);
	ft_free(data);
}
