/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:33:56 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/11 15:56:02 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_data *data, int print)
{
	int		temp;
	int		i;

	if (data->index_a > 1)
	{
		temp = data->stack_a[0];
		i = 0;
		while (i < data->index_a - 1)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}
		data->stack_a[i] = temp;
		if (print)
			ft_putendl("ra");
	}
}

void	rb(t_data *data, int print)
{
	int		temp;
	int		i;

	if (data->index_b > 1)
	{
		temp = data->stack_b[0];
		i = 0;
		while (i < data->index_b - 1)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
		data->stack_b[i] = temp;
		if (print)
			ft_putendl("rb");
	}
}

void	rr(t_data *data, int print)
{
	ra(data, print);
	rb(data, print);
}
