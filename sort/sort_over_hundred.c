/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:38:28 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/08 18:17:20 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_beggin_stack(t_data *data, int start, int end)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (i < data->index_a)
	{
		if (check_is_in(data, start, end, i))
			return (count);
		count++;
		i++;
	}
	return (1337);
}

int	check_last_stack(t_data *data, int start, int end)
{
	int		count;
	int		i;

	count = 1;
	i = data->index_a - 1;
	while (i != -1)
	{
		if (check_is_in(data, start, end, i))
			return (count);
		count++;
		i--;
	}
	return (1337);
}

void	do_it(t_data *data, int start, int end)
{
	int		first_pos;
	int		last_pos;

	first_pos = check_beggin_stack(data, start, end);
	last_pos = check_last_stack(data, start, end);
	if (first_pos <= last_pos)
	{
		while (first_pos--)
			ra(data, 1);
		pb(data, 1);
	}
	else
	{
		while (last_pos--)
			rra(data, 1);
		pb(data, 1);
	}
}

void	sort_over_hundred_util(t_data *data)
{
	if (data->index_a == 2)
		sort_two(data);
	else if (data->index_a == 3)
		tree_nembre(data, data->stack_a[0], data->stack_a[1], data->stack_a[2]);
	else if (data->index_a >= 4 && data->index_b <= 5)
	{
		while (data->index_a)
			pb(data, 1);
	}
	check_b(data);
}

void	sort_over_hundred(t_data *data, int divid, int i, int k)
{
	int		chunk_start;
	int		chunk_len;
	int		start;
	int		inc;

	chunk_len = data->index_a / divid;
	inc = chunk_len;
	start = 0;
	while (i < divid)
	{
		while (k < chunk_len)
		{
			do_it(data, start, chunk_len);
			k++;
		}
		start += inc;
		chunk_len += inc;
		i++;
	}
	sort_over_hundred_util(data);
}
