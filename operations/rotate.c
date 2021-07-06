/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:33:56 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 19:37:51 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_data *data)
{
	int temp;
	int i;

	if (data->index_a > 1)
	{
		temp = data->tab_a[0];
		i = 0;
		while (i < data->index_a - 1)
		{
			data->tab_a[i] = data->tab_a[i + 1];
			i++;
		}
		data->tab_a[i] = temp;
		ft_putendl("ra");
	}
}

void	rb(t_data *data)
{
	int temp;
	int	i;

	if (data->index_b > 1)
	{
		temp = data->tab_b[0];
		i = 0;
		while (i < data->index_b - 1)
		{
			data->tab_b[i] = data->tab_b[i + 1];
			i++;
		}
		data->tab_b[i] = temp;
		ft_putendl("rb");
	}
}

// void	rotate(t_stack **stack, char c)
// {
// 	int		value;
// 	t_stack *del;

// 	value = (*stack)->nbr;
// 	del = *stack;
// 	*stack = (*stack)->next;
// 	(*stack)->prev = NULL;
// 	free(del);
// 	lstadd_back(stack, lst_new2(value));
// 	if (c == 'a')
// 		ft_putendl("ra");
// 	else
// 		ft_putendl("rb");
// }

// void	rotate(t_stack **stack, char c)
// {
	
// }

// void	rotate_a(t_data *data)
// {
// 	int		value;
// 	t_stack *del;

// 	if (data->a->next)
// 	{
// 		value = data->a->nbr;
// 		del = data->a;
// 		data->a = data->a->next;
// 		free(del);
// 		lstadd_back(&data->a, lst_new2(value));
// 	}
// }

// void	rotate_b(t_data *data)
// {
// 	int		value;
// 	t_stack *del;

// 	if (data->b->next)
// 	{
// 		value = data->b->nbr;
// 		del = data->b;
// 		data->b = data->b->next;
// 		free(del);
// 		lstadd_back(&data->b, lst_new2(value));
// 	}
// }

// void	rotate_a_b(t_data *data)
// {
// 	rotate(&data->a, 'a');
// 	rotate(&data->b, 'b');
// 	// rotate_a(data);
// 	// rotate_b(data);
// }