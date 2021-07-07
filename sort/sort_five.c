/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:55:19 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 18:58:58 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		get_pos(t_data *data, int index)
{
	int		i;
	int		pos;

	pos = 0;
	i = 0;
	while (i < data->index_a)
	{
		if (data->tab_a[i] == data->tab[index])
			return (pos);
		pos++;
		i++;
	}
	return (-1);
}

void	sort_five(t_data *data)
{
	int		first_pos;
	int		last_pos;
	int		i;

	i = 0;
	while (i < 2)
	{
		first_pos = get_pos(data, i);
		if (first_pos == -1)
			last_pos = -1;
		else
			last_pos = data->index_a - first_pos;
		if (first_pos != -1 && last_pos != -1)
		{
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
		i++;
	}
	tree_nembre(data, data->tab_a[0], data->tab_a[1], data->tab_a[2]);
	sort_two(data);
	pa(data);
	pa(data);
}