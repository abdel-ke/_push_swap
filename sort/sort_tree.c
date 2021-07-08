/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:48:27 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/08 18:18:14 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tree_nembre(t_data *data, int f_value, int s_value, int l_value)
{
	if (s_value > l_value && l_value > f_value && l_value < s_value)
	{
		sa(data, 1);
		ra(data, 1);
	}
	else if (l_value > f_value && f_value > s_value && f_value < l_value)
		sa(data, 1);
	else if (s_value > f_value && f_value > l_value && f_value < s_value)
		rra(data, 1);
	else if (f_value > l_value && l_value > s_value && l_value < f_value)
		ra(data, 1);
	else if (f_value > s_value && s_value > l_value && s_value < f_value)
	{
		sa(data, 1);
		rra(data, 1);
	}
}

void	reverse_tree_nbr(t_data *data, int f_value, int s_value, int l_value)
{
	if (s_value > f_value && s_value < l_value)
	{
		rb(data, 1);
		sb(data, 1);
	}
	else if (l_value > f_value && l_value < s_value)
		rb(data, 1);
	else if (f_value > s_value && f_value < l_value)
		rrb(data, 1);
	else if (f_value > l_value && f_value < s_value)
		sb(data, 1);
	else if (l_value > s_value && l_value < f_value)
	{
		rrb(data, 1);
		sb(data, 1);
	}
}
