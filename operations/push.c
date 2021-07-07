/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:39:45 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 18:40:00 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_data *data)
{
	int temp;
	int i;

	if (data->index_b)
	{
		temp = data->tab_b[0];
		i = 0;
		while (i < data->index_b)
		{
			data->tab_b[i] = data->tab_b[i + 1];
			i++;
		}
		data->index_b--;
		i = ++data->index_a;
		while (i)
		{
			data->tab_a[i] = data->tab_a[i - 1];
			i--;
		}
		data->tab_a[i] = temp;
		ft_putendl("pa");
	}
}

void	pb(t_data *data)
{
	int temp;
	int i;

	if (data->index_a)
	{
		temp = data->tab_a[0];
		i = 0;
		while (i < data->index_a)
		{
			data->tab_a[i] = data->tab_a[i + 1];
			i++;
		}
		data->index_a--;
		i = ++data->index_b;
		while (i)
		{
			data->tab_b[i] = data->tab_b[i - 1];
			i--;
		}
		data->tab_b[i] = temp;
		ft_putendl("pb");
	}
}
