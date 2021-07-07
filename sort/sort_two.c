/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:52:04 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 19:08:27 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sa(data);
}

void	reverse_two(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sb(data);
}
