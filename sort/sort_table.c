/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:14:49 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/08 11:21:32 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_stack(t_stack *stack)
{
	int		i;

	i = 0;
	while (stack->prev)
		stack = stack->prev;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	fill_table(t_data *data)
{
	t_stack	*stack;
	int		i;

	data->count_table = count_stack(data->a);
	data->tab = malloc(sizeof(int) * data->count_table);
	data->stack_a = malloc(sizeof(int) * data->count_table);
	data->stack_b = malloc(sizeof(int) * data->count_table);
	stack = get_head(data->a);
	i = 0;
	while (stack)
	{
		data->stack_a[i] = stack->nbr;
		data->tab[i++] = stack->nbr;
		data->index_a++;
		stack = stack->next;
	}
}

int	check_double(t_data *data)
{
	int		i;
	int		j;

	i = 0;
	while (i < data->count_table)
	{
		j = 0;
		while (j < data->count_table)
		{
			if (data->tab[i] == data->tab[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	sort_table(t_data *data)
{
	int		i;
	int		j;
	int		temp;

	fill_table(data);
	if (!check_double(data))
		return (0);
	i = 0;
	while (i < data->count_table - 1)
	{
		if (data->tab[i] > data->tab[i + 1])
		{
			temp = data->tab[i];
			data->tab[i] = data->tab[i + 1];
			data->tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	return (1);
}
