/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:45:10 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/10 14:17:21 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_instriction(t_data *data, char *line)
{
	if (!(ft_strcmp(line, "sa")))
		sa(data, 0);
	else if (!(ft_strcmp(line, "sb")))
		sb(data, 0);
	else if (!(ft_strcmp(line, "ra")))
		ra(data, 0);
	else if (!(ft_strcmp(line, "rb")))
		rb(data, 0);
	else if (!(ft_strcmp(line, "rra")))
		rra(data, 0);
	else if (!(ft_strcmp(line, "rrb")))
		rrb(data, 0);
	else if (!(ft_strcmp(line, "pa")))
		pa(data, 0);
	else if (!(ft_strcmp(line, "pb")))
		pb(data, 0);
	else
		write(2, "Error\n", 6);
}
