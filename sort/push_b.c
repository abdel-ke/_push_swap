#include "../push_swap.h"

int		check_first_b(t_data *data, int index)
{
	t_stack	*stack;
	int		pos;

	stack = data->b;
	pos = 0;
	// display(data);
	while (stack)
	{
		// printf("NBR|%d|\n", stack->nbr);
		if (stack->nbr == data->tab[index])
		{
			// printf("\nN|%d|\tF|%d|\tL|%d|\n\n", stack->nbr, pos,
			// count_stack(data->b) - pos);
			return (pos);
		}
		pos++;
		stack = stack->next;
	}
	return (-1);
}

void	do_it_b(t_data *data, int index)
{
	int first_pos;
	int last_pos;

	first_pos = check_first_b(data, index);
	last_pos = count_stack(data->b) - first_pos;
	if (first_pos != -1)// && last_pos != -1)
	{
		if (first_pos <= last_pos)
		{
			while (first_pos--)
				rotate(&data->b, 'b');
			// push_stack(&data->a, &data->b, 'a');
			pa(data);
		}
		else
		{
			while (last_pos--)
				reverse_rotate(&data->b, 'b');
			// push_stack(&data->a, &data->b, 'a');
			pa(data);
		}
	}
}

void	check_b(t_data *data)
{
	int i;

	i = count_stack(data->b) - 1;
	// i = data->count_table - 1;
	while (i != -1)
		// printf("|%d|\n", data->tab[i--]);
		do_it_b(data, i--);
	// push_stack(&data->a, &data->b, 'a');
	pa(data);
}

// int		get_first(t_data *data)
// {
// 	int i;

// 	i = count_stack(data->b) - 1;
// 	display(data);
// 	printf("|%d|\n", data->b->nbr);
// 	// exit(1);
// 	while (i != -1)
// 	{
// 		if (data->tab[i] == data->b->nbr)
// 			return (i);
// 		i--;
// 	}
// 	return (-1);
// }

// int ook = 0;
// void	do_it2(t_data *data)
// {
// 	int		first_pos;
// 	int		last_pos;

// 	first_pos = get_first(data);
// 	last_pos = count_stack(data->b) - first_pos;
// 	printf("|%d|\n", data->b->nbr);
// 	ook++;
// 	if (ook == 3)
// 		exit(1);
// 	if (first_pos != -1 && last_pos != -1)
// 	{
// 		if (first_pos <= last_pos)
// 		{
// 			while (first_pos--)
// 				rotate(&data->b, 'b');
// 			push_stack(&data->a, &data->b, 'a');
// 		}
// 		else
// 		{
// 			while (last_pos--)
// 				reverse_rotate(&data->b, 'b');
// 			push_stack(&data->a, &data->b, 'a');
// 		}
// 	}
// }

// void	check_b(t_data *data)
// {
// 	while (data->b)
// 	{
// 		printf("hello\n");
// 		do_it2(data);
// 	}
// }