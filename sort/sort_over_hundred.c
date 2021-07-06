/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:38:28 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 12:04:13 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		check_is_in(t_data *data, int start, int end)
{
	t_stack	*stack;

	stack = data->a;
	while (stack)
	{
		if (stack->nbr >= data->tab[start] && stack->nbr <= data->tab[end])
			return (1);
		stack = stack->next;
	}
	return (0);
}

int		check_beggin_stack(t_data *data, int start, int end)
{
	t_stack *stack;
	int	count;

	stack = data->a;
	count = 0;
	while (stack)
	{
		if (stack->nbr >= data->tab[start] && stack->nbr <= data->tab[end])
			return (count);
		count++;
		stack = stack->next;
	}
	return (1337);
}

int		check_last_stack(t_data *data, int start, int end)
{
	t_stack	*stack;
	int		count;

	stack  = data->a;
	while (stack->next)
		stack = stack->next;
	count = 1;
	while (stack)
	{
		if (stack->nbr >= data->tab[start] && stack->nbr <= data->tab[end])
			return (count);
		count++;
		stack = stack->prev;
	}
	return (1337);
}

void	do_it(t_data *data, int start, int end)
{
	int	first_pos;
	int	last_pos;

	int i = start;
	first_pos = check_beggin_stack(data, start, end);
	last_pos = check_last_stack(data, start, end);
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

void	push_b(t_data *data)
{
	t_stack *stack;

	stack = data->a;
	while (stack)
	{
		pb(data);
		// push_stack(&data->b, &data->a, 'b');
		stack = stack->next;
	}
}

void	sort_over_hundred(t_data *data, int divid)
{
	int i;
	int start;
	int end;

	i = 1;
	start = 0;
	while (i <= 5)
	{
		end = (data->count_table / divid) * i;
		while (check_is_in(data, start, end) == 1)
			do_it(data, start, end);
		start = end;
	// exit(1);
		i++;
	}
	// i = count_stack(data->a) - 1;
	// while (i != -1)
	// {
	// 	push_stack(&data->b, &data->a, 'b');
	// 	i--;
	// }
	if (count_stack(data->a) == 2)
		sort_two(data->a);
	else if (count_stack(data->a) == 3)
		tree_nembre(&data->a);
	else if (count_stack(data->a) >= 4)
		// push_b(data);
		sort_five(data);
	// display(data);
	check_b(data);
}