/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:02:53 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 18:47:09 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_data	*data)
{
	int temp;

	if (data->index_a >= 2)
	{
		temp = data->tab_a[0];
		data->tab_a[0] = data->tab_a[1];
		data->tab_a[1] = temp;
		ft_putendl("sa");
	}
}

void	sb(t_data	*data)
{
	int temp;

	if (data->index_b >= 2)
	{
		temp = data->tab_b[0];
		data->tab_b[0] = data->tab_b[1];
		data->tab_b[1] = temp;
		ft_putendl("sb");
	}
}

void	swap_stack(t_stack *stack, char c)
{
	int var1;
	int var2;
	t_stack	*head;

	if (stack->next != NULL)
	{
		var1 = stack->nbr;
		head = get_head(stack);
		stack = stack->next;
		var2 = stack->nbr;
		stack->nbr = var1;
		head->nbr = var2;
		if (c == 'a')
			ft_putendl("sa");
		else
			ft_putendl("sb");
	}
}

void	swap_a_b(t_data *data)
{
	swap_stack(data->a, 'a');
	swap_stack(data->b, 'b');
}