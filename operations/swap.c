/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:02:53 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/11 15:27:50 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_data	*data, int print)
{
	int		temp;

	if (data->index_a >= 2)
	{
		temp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = temp;
		if (print)
			ft_putendl("sa");
	}
}

void	sb(t_data	*data, int print)
{
	int		temp;

	if (data->index_b >= 2)
	{
		temp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = temp;
		if (print)
			ft_putendl("sb");
	}
}

void	ss(t_data	*data, int print)
{
	sa(data, print);
	sb(data, print);
}
