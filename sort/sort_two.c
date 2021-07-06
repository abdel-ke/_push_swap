/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:52:04 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/06/15 10:38:15 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_stack *stack)
{
	if (stack->nbr > stack->next->nbr)
		swap_stack(stack, 'a');
}

void	reverse_two(t_stack *stack)
{
	if (stack->nbr < stack->next->nbr)
		swap_stack(stack, 'b');
}