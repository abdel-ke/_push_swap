/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:25:19 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/08 11:24:38 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_is_in(t_data *data, int start, int end, int index)
{
	while (start < end)
	{
		if (data->tab[start] == data->stack_a[index])
			return (1);
		start++;
	}	
	return (0);
}

int	check_arg_util(char *str, int pos)
{
	if (str[pos] == ' ')
		;
	else if (str[pos] >= '0' && str[pos] <= '9')
		;
	else if (str[pos] == '-' && str[pos - 1] >= '0' && str[pos - 1] <= '9')
		return (0);
	else if (str[pos] == '-' && str[pos + 1] >= '0' && str[pos + 1] <= '9')
		;
	else
		return (0);
	return (1);
}

int	check_arg(char **av, t_data *data)
{
	int		i;
	int		j;

	i = 1;
	while (av[i])
	{
		j = -1;
		while (av[i][++j])
			if (!check_arg_util(av[i], j))
				return (0);
		i++;
	}
	if (!stock_args(data, av))
		return (0);
	if (sort_table(data) == 0)
		return (0);
	return (1);
}

t_stack	*get_head(t_stack *stack)
{
	while (stack->prev)
		stack = stack->prev;
	return (stack);
}
