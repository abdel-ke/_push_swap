/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:57:08 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/10 14:19:59 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_a(t_data *data)
{
	int		i;

	i = 0;
	if (data->index_b)
		return (0);
	while (i < data->index_a - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main_util(t_data *data, char *line)
{
	while (get_next_line(&line))
	{
		if (line[0] != '\0')
			get_instriction(data, line);
		free(line);
		line = NULL;
	}
	free(line);
	if (!check_a(data))
	{
		ft_putstr("KO\n");
		ft_free(data);
		return (1);
	}
	else
	{
		ft_putstr("OK\n");
		ft_free(data);
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	*line;
	t_data	*data;

	line = NULL;
	if (ac > 1)
	{
		data = (t_data *)malloc(sizeof(t_data));
		init(data);
		if (!check_arg(av, data))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		else
			return (main_util(data, line));
	}
	return (0);
}
