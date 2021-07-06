/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:55:19 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 15:59:41 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		get_last(t_stack *stack)
{
	t_stack *curr;

	curr = stack;
	while (curr->next)
		curr = curr->next;
	return (curr->nbr);
}


// void	utils_five(t_data *data)
// {
// 		tree_nembre(&data->a);
// 		if (ft_checker(data->b))
// 		    reverse_two(data->b);
// 		push_stack(&data->a, &data->b, 'a');
// 		push_stack(&data->a, &data->b, 'a');
// }

// void	sort_five(t_data *data)
// {
// 	t_stack	*curr;
// 	int		pos;

// 	if (count_stack(data->a) == 3)
// 		utils_five(data);
// 	else
// 	{
// 		curr = data->a;
// 		pos = 0;
// 		while (curr)
// 		{
// 			if (curr->nbr < data->tab[data->count_table / 2])
// 			{
// 				while (pos--)
// 					rotate(&data->a, 'a');
// 				push_stack(&data->b, &data->a, 'b');
// 				sort_five(data);
// 				break ;
// 			}
// 			pos++;
// 			curr = curr->next;
// 		}
// 	}
// }


int		get_pos(t_data *data, int index)
{
	t_stack	*stack;
	int		pos;

	stack = get_head(data->a);
	pos = 0;
	while (stack)
	{
		if (stack->nbr == data->tab[index])
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}

void	sort_five(t_data *data)
{
	int		first_pos;
	int		last_pos;
	int		i;

	i = 0;
	while (i < 2)
	{
		display(data);
		first_pos = get_pos(data, i);
		if (first_pos == -1)
			last_pos = -1;
		else
			last_pos = count_stack(get_head(data->a)) - first_pos;
		if (first_pos != -1 && last_pos != -1)
		{
			if (first_pos <= last_pos)
			{
				while (first_pos--)
					rotate(&data->a, 'a');
				pb(data);
				// push_stack(&data->b, &data->a, 'b');
			}
			else
			{
				while (last_pos--)
					reverse_rotate(&data->a, 'a');
				pb(data);
				// push_stack(&data->b, &data->a, 'b');
			}
		}
		i++;
	}
	tree_nembre(&data->a);
	// pa(data);
	// pa(data);
	push_stack(&data->a, &data->b, 'a');
	push_stack(&data->a, &data->b, 'a');
}