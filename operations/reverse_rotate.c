/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:20:17 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/08 18:14:19 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_data *data, int print)
{
	int		temp;
	int		i;

	if (data->index_a > 1)
	{
		temp = data->stack_a[data->index_a - 1];
		i = data->index_a - 1;
		while (i)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[i] = temp;
		if (print)
			ft_putendl("rra");
	}
}

void	rrb(t_data *data, int print)
{
	int		temp;
	int		i;

	if (data->index_b > 1)
	{
		temp = data->stack_b[data->index_b - 1];
		i = data->index_b - 1;
		while (i)
		{
			data->stack_b[i] = data->stack_b[i - 1];
			i--;
		}
		data->stack_b[i] = temp;
		if (print)
			ft_putendl("rrb");
	}
}
