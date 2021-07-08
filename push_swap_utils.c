/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:53:43 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/08 18:45:49 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_data *data)
{
	data->a = NULL;
	data->stack_a = NULL;
	data->stack_b = NULL;
	data->tab = NULL;
	data->index_a = 0;
	data->index_b = 0;
}

int	stock_args_utils(t_data *data, char **av, int i, int *j)
{
	long long	nbr;

	nbr = ft_atoi(av[i] + *j);
	if (nbr < -2147483648 || nbr > 2147483647)
		return (0);
	if (av[i][*j] == '-')
		(*j)++;
	while (av[i][*j] >= '0' && av[i][*j] <= '9')
		(*j)++;
	lstadd_back(&data->a, lst_new2(nbr));
	return (1);
}

int	stock_args(t_data *data, char **av)
{
	int			i;
	int			j;
	int			start;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] && (av[i][j] == ' ' || av[i][j] == '\t'))
				j++;
			if (av[i][j])
				if (!stock_args_utils(data, av, i, &j))
					return (0);
		}
		i++;
	}
	return (1);
}

void	ft_free(t_data *data)
{
	if (data->a)
		lstclear(&data->a, free);
	if (data->stack_a)
		free(data->stack_a);
	if (data->stack_b)
		free(data->stack_b);
	if (data->tab)
		free(data->tab);
	if (data)
		free(data);
}
