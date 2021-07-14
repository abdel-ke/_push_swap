/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:39:45 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/14 15:56:52 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pa(t_data *data, int print)
{
	int temp;
	int i;

	if (data->index_b)
	{
		temp = data->stack_b[0];
		i = 0;
		while (i < data->index_b - 1)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
		data->index_b--;
		i = ++data->index_a - 1;
		while (i)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[i] = temp;
		if (print)
			ft_putendl("pa");
	}
}

void pb(t_data *data, int print)
{
	int temp;
	int i;

	if (data->index_a)
	{
		temp = data->stack_a[0];
		i = 0;
		while (i < data->index_a - 1)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}
		data->index_a--;
		i = ++data->index_b - 1;
		while (i)
		{
			data->stack_b[i] = data->stack_b[i - 1];
			i--;
		}
		data->stack_b[i] = temp;
		if (print)
			ft_putendl("pb");
	}
}
