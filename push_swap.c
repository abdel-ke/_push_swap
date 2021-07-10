/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:56:37 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/10 15:37:23 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	caller(t_data *data)
{
	if (data->count_table == 3)
		tree_nembre(data, data->stack_a[0], data->stack_a[1], data->stack_a[2]);
	else if (data->count_table == 2)
		sort_two(data);
	else if (data->count_table >= 4 && data->count_table <= 5)
		sort_five(data, 0, 0);
	else if (data->count_table >= 6 && data->count_table <= 99)
		sort_over_hundred(data, 5, 0, 0);
	else
		sort_over_hundred(data, 13, 0, 0);
}

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac > 1)
	{
		data = (t_data *)malloc(sizeof(t_data));
		init(data);
		if (!check_arg(av, data))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		else
			caller(data);
		ft_free(data);
	}
	return (0);
}
