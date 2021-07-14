/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:56:37 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/14 16:04:38 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(t_data *data, char *msg, int ret)
{
	ft_putendl(msg);
	ft_free(data);
	return (ret);
}

void	caller(t_data *data)
{
	if (data->count_table == 2)
		sort_two(data);
	if (data->count_table == 3)
		tree_nembre(data, data->stack_a[0], data->stack_a[1], data->stack_a[2]);
	if (data->count_table > 3 && data->count_table <= 5)
		sort_five(data, 0, 0);
	if (data->count_table > 5 && data->count_table <= 100)
		sort_over_hundred(data, 5, 0, 0);
	if (data->count_table > 100 && data->count_table <= 500)
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
			return (ft_error(data, "Error", 1));
		// {
		// 	write(1, "Error\n", 6);
		// 	return (1);
		// }
		else if (!check_a(data))
			caller(data);
		ft_free(data);
	}
	return (0);
}
