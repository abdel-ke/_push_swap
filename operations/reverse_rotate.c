/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:20:17 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 18:40:07 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_data *data)
{
	int temp;
	int i;

	if (data->index_a > 1)
	{
		temp = data->tab_a[data->index_a - 1];
		i = data->index_a - 1;
		while (i)
		{
			data->tab_a[i] = data->tab_a[i - 1];
			i--;
		}
		data->tab_a[i] = temp;
		ft_putendl("rra");
	}
}

void	rrb(t_data *data)
{
	int temp;
	int	i;

	if (data->index_b > 1)
	{
		temp = data->tab_b[data->index_b - 1];
		i = data->index_b - 1;
		while (i)
		{
			data->tab_b[i] = data->tab_b[i - 1];
			i--;
		}
		data->tab_b[i] = temp;
		ft_putendl("rrb");
	}
}

void	reverse_rotate(t_stack **stack, char c)
{
	t_stack *last;
	int	value;

	if ((*stack)->next)
	{
		last = get_head(*stack);
		while (last->next->next)
			last = last->next;
		value = last->next->nbr;
		free(last->next);
		last->next = NULL;
		ft_lstadd_front(stack, lst_new2(value));
		if (c == 'a')
			ft_putendl("rra");	
		else
			ft_putendl("rrb");
	}	
}
