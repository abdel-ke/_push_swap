/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:48:27 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 11:59:23 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	tree_nembre(t_stack *stack)
// {
// 	int	f_value;
// 	int	s_value;
// 	int	l_value;

// 	f_value = stack->nbr;
// 	s_value = stack->next->nbr;
// 	l_value = stack->next->next->nbr;
// 	if (s_value > l_value && l_value > f_value && l_value < s_value)
// 	{
// 		swap_stack(stack, 'a');
// 		rotate(&stack, 'a');
// 	}
// 	else if (l_value > f_value && f_value > s_value && f_value < l_value)
// 		swap_stack(stack, 'a');
// 	else if (s_value > f_value && f_value > l_value && f_value < s_value)
// 		reverse_rotate(&stack, 'a');
// 	else if (f_value > l_value && l_value > s_value && l_value < f_value)
// 		rotate(&stack, 'a');
// 	else if (f_value > s_value && s_value > l_value && s_value < f_value)
// 	{
// 		swap_stack(stack, 'a');
// 		reverse_rotate(&stack, 'a');
// 	}
// }

void	tree_nembre(t_stack **stack)
{
	int	f_value;
	int	s_value;
	int	l_value;

	f_value = (*stack)->nbr;
	s_value = (*stack)->next->nbr;
	l_value = (*stack)->next->next->nbr;
	if (s_value > l_value && l_value > f_value && l_value < s_value)
	{
		swap_stack(*stack, 'a');
		rotate(stack, 'a');
	}
	else if (l_value > f_value && f_value > s_value && f_value < l_value)
		swap_stack(*stack, 'a');
	else if (s_value > f_value && f_value > l_value && f_value < s_value)
		reverse_rotate(stack, 'a');
	else if (f_value > l_value && l_value > s_value && l_value < f_value)
		rotate(stack, 'a');
	else if (f_value > s_value && s_value > l_value && s_value < f_value)
	{
		swap_stack(*stack, 'a');
		reverse_rotate(stack, 'a');
	}
}

// void	reverse_tree_nbr2(t_stack **stack)
// {
// 	int	f_value;
// 	int	s_value;
// 	int	l_value;

// 	while (!ft_checker_reverse(*stack))
// 	{
// 		f_value = (*stack)->nbr;
// 		s_value = (*stack)->next->nbr;
// 		l_value = (*stack)->next->next->nbr;
// 		if ((s_value > f_value && s_value < l_value)
// 		|| (f_value < s_value && f_value > l_value))
// 			swap_stack(*stack, 'b');
// 		else if ((f_value > s_value && f_value < l_value)
// 		|| (l_value > s_value && l_value < f_value)
// 		|| (l_value > f_value && l_value < s_value))
// 			reverse_rotate(stack, 'b');
// 	}
// }

void	reverse_tree_nbr(t_stack **stack)
{
	int	f_value;
	int	s_value;
	int	l_value;

	f_value = (*stack)->nbr;
	s_value = (*stack)->next->nbr;
	l_value = (*stack)->next->next->nbr;
	if (s_value > f_value && s_value < l_value)
	{
		rotate(stack, 'b');
		swap_stack(*stack, 'b');
	}
	else if (l_value > f_value && l_value < s_value)
		rotate(stack, 'b');
	else if (f_value > s_value && f_value < l_value)
		reverse_rotate(stack, 'b');
	else if (f_value > l_value && f_value < s_value)
		swap_stack(*stack, 'b');
	else if (l_value > s_value && l_value < f_value)
	{
		reverse_rotate(stack, 'b');
		swap_stack(*stack, 'b');
	}
}