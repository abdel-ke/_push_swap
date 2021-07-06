/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:38:28 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 12:04:13 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		check_is_in(t_data *data, int start, int end)
{
	int i;

	i = 0;
	while (i < data->index_a)
	{
		if (data->tab_a[i] >= data->tab[start] && data->tab_a[i] <= data->tab[end])
			return (1);
		i++;
	}
	return (0);
}

int		check_beggin_stack(t_data *data, int start, int end)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < data->index_a)
	{
		if (data->tab_a[i] >= data->tab[start] && data->tab_a[i] <= data->tab[end])
			return (count);
		count++;
		i++;
	}
	return (1337);
}

int		check_last_stack(t_data *data, int start, int end)
{
	int		count;
	int		i;

	count = 1;
	i = data->index_a - 1;
	while (i)
	{
		if (data->tab_a[i] >= data->tab[start] && data->tab_a[i] <= data->tab[end])
			return (count);
		count++;
		i--;
	}
	return (1337);
}

void	do_it(t_data *data, int start, int end)
{
	int	first_pos;
	int	last_pos;

	int i = start;
	first_pos = check_beggin_stack(data, start, end);
	last_pos = check_last_stack(data, start, end);
	if (first_pos <= last_pos)
	{
		while (first_pos--)
			ra(data);
		pb(data);
	}
	else
	{
		while (last_pos--)
			rra(data);
		pb(data);
	}
}

void	push_b(t_data *data)
{
	int i;

	i = 0;
	while (i < data->index_a)
	{
		pb(data);
		i++;
	}
}

void	sort_over_hundred(t_data *data, int divid)
{
	int i;
	int start;
	int end;

	i = 1;
	start = 0;
	while (i < 5)
	{
		end = (data->count_table / divid) * i;
		while (check_is_in(data, start, end) == 1)
			do_it(data, start, end);
		start = end;
		i++;
	}
	// puts("hello");
	if (data->index_a == 2)
		sort_two(data);
	else if (data->index_a == 3)
		tree_nembre(data, data->tab_a[0], data->tab_a[1], data->tab_a[2]);
	else if (data->index_a >= 4)
		sort_five(data);
		// push_b(data);
	// display(data);
	check_b(data);
}