/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:46:00 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/10 15:28:22 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_atoi(const char *str)
{
	int			i;
	int			n;
	long long	rst;

	i = 0;
	rst = 0;
	n = 1;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f') && str[i])
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
		rst = (rst * 10) + (str[i++] - '0');
	return (rst * n);
}
