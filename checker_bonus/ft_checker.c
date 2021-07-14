/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:45:10 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/14 15:28:39 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_error(t_data *data, char *msg, int ret)
{
	ft_putendl(msg);
	ft_free(data);
	return (ret);
}

void	get_instriction(t_data *data, char *line)
{
	if (!(ft_strcmp(line, "sa")))
		sa(data, 0);
	else if (!(ft_strcmp(line, "sb")))
		sb(data, 0);
	else if (!(ft_strcmp(line, "ss")))
		ss(data, 0);
	else if (!(ft_strcmp(line, "ra")))
		ra(data, 0);
	else if (!(ft_strcmp(line, "rb")))
		rb(data, 0);
	else if (!(ft_strcmp(line, "rrr")))
		rrr(data, 0);
	else if (!(ft_strcmp(line, "rr")))
		rr(data, 0);
	else if (!(ft_strcmp(line, "rra")))
		rra(data, 0);
	else if (!(ft_strcmp(line, "rrb")))
		rrb(data, 0);
	else if (!(ft_strcmp(line, "pa")))
		pa(data, 0);
	else if (!(ft_strcmp(line, "pb")))
		pb(data, 0);
	else
		exit(ft_error(data, "Error", 0));
}
