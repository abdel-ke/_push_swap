/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:48:27 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 19:34:24 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tree_nembre(t_data *data, int f_value, int s_value, int l_value)
{
	if (s_value > l_value && l_value > f_value && l_value < s_value)
	{
		sa(data);
		ra(data);
	}
	else if (l_value > f_value && f_value > s_value && f_value < l_value)
		sa(data);
	else if (s_value > f_value && f_value > l_value && f_value < s_value)
		rra(data);
	else if (f_value > l_value && l_value > s_value && l_value < f_value)
		ra(data);
	else if (f_value > s_value && s_value > l_value && s_value < f_value)
	{
		sa(data);
		rra(data);
	}
}

void	reverse_tree_nbr(t_data *data, int f_value, int s_value, int l_value)
{
	if (s_value > f_value && s_value < l_value)
	{
		rb(data);
		sb(data);
	}
	else if (l_value > f_value && l_value < s_value)
		rb(data);
	else if (f_value > s_value && f_value < l_value)
		rrb(data);
	else if (f_value > l_value && f_value < s_value)
		sb(data);
	else if (l_value > s_value && l_value < f_value)
	{
		rrb(data);
		sb(data);
	}
}
