#include "../push_swap.h"

int		check_first_b(t_data *data, int index)
{
	int		pos;
	int		i;

	pos = 0;
	i = 0;
	while (i < data->index_b)
	{
		if (data->tab_b[i] == data->tab[index])
			return (pos);
		pos++;
		i++;
	}
	return (-1);
}

void	do_it_b(t_data *data, int index)
{
	int first_pos;
	int last_pos;

	first_pos = check_first_b(data, index);
	last_pos = data->index_b - first_pos;
	if (first_pos != -1)
	{
		if (first_pos <= last_pos)
		{
			while (first_pos--)
				rb(data);
			pa(data);
		}
		else
		{
			while (last_pos--)
				rrb(data);
			pa(data);
		}
	}
}

void	check_b(t_data *data)
{
	int i;

	i = data->index_b - 1;
	while (i != - 1)
	{
		do_it_b(data, i);
		i--;
	}
	pa(data);
}
