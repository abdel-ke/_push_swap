/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:46:00 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/06/23 15:15:42 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// static int	ft_subatoi(const char *str, int sign, int i)
// {
// 	long int		res;
// 	long int		over;

// 	res = 0;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		over = res;
// 		res = res * 10 + sign * (str[i] - '0');
// 		if (sign == 1 && res < over)
// 			return (-1);
// 		if (sign == -1 && res > over)
// 			return (0);
// 		i++;
// 	}
// 	return (res);
// }

// int	ft_atoi(const char *str)
// {
// 	int			i;
// 	long int	res;
// 	int			sign;

// 	i = 0;
// 	res = 0;
// 	sign = 1;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
// 		i++;
// 	if (str[i] == '-')
// 	{
// 		sign = -1;
// 		i++;
// 	}
// 	else if (str[i] == '+')
// 		i++;
// 	res = ft_subatoi(str, sign, i);
// 	return (res);
// }

int	ft_atoi(const char *str)
{
	int i;
	int n;
	int rst;

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
