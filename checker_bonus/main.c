/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:57:08 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/14 15:28:30 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main_util(t_data *data, char *line)
{
	while (get_next_line(0, &line) == 1)
	{
		// printf("ok");
		get_instriction(data, line);
		free(line);
	}
	free(line);
	if (!check_a(data))
		ft_error(data, "KO", 1);
	else
		ft_error(data, "OK", 0);
	return (0);
}

int	main(int ac, char **av)
{
	char	*line;
	t_data	*data;

	if (ac > 1)
	{
		line = NULL;
		data = (t_data *)malloc(sizeof(t_data));
		init(data);
		if (!check_arg(av, data))
			ft_error(data, "Error", 1);
		else
			return (main_util(data, line));
	}
	return (0);
}
