/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:39:45 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/06 18:56:27 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_data *data)
{
	int temp;
	int i;

	if (data->index_b)
	{
		temp = data->tab_b[0];
		i = 0;
		while (i < data->index_b)
		{
			data->tab_b[i] = data->tab_b[i + 1];
			i++;
		}
		data->index_b--;
		i = ++data->index_a;
		while (i)
		{
			data->tab_a[i] = data->tab_a[i - 1];
			i--;
		}
		data->tab_a[i] = temp;
		ft_putendl("pa");
	}
}

void	pb(t_data *data)
{
	int temp;
	int i;

	if (data->index_a)
	{
		temp = data->tab_a[0];
		i = 0;
		while (i < data->index_a)
		{
			data->tab_a[i] = data->tab_a[i + 1];
			i++;
		}
		data->index_a--;
		i = ++data->index_b;
		while (i)
		{
			data->tab_b[i] = data->tab_b[i - 1];
			i--;
		}
		data->tab_b[i] = temp;
		ft_putendl("pb");
	}
}






// t_stack	*pa_util(t_data *data, t_stack *node)
// {
// 	node = NULL;
// 	if (data->b)
// 	{
// 		data->b = get_head(data->b);
// 		node = data->b;
// 		data->b = data->b->next;
// 		data->b->prev = NULL;
// 		node->next = NULL;
// 		data->a = node;
// 	}
// 	return (node);
// }

// t_stack	*pb_util(t_data *data, t_stack *node)
// {
// 	data->a = get_head(data->a);
// 	node = data->a;
// 	data->a = (data->a)->next;
// 	(data->a)->prev = NULL;
// 	node->next = NULL;
// 	data->b = node;
// 	return (node);
// }

// void	ft_pb(t_data *data)
// {
// 	t_stack	*node;

// 	node = NULL;
// 	if (data->b != NULL)
// 	{
// 		(data->b) = get_head(data->b);
// 		if (data->a)
// 		{
// 			(data->a) = get_head(data->a);
// 			node = data->a;
// 			data->a = (data->a)->next;
// 			if (data->a)
// 				(data->a)->prev = NULL;
// 			(data->b)->prev = node;
// 			node->next = (data->b);
// 		}
// 	}
// 	else
// 		node = pb_util(data, node);
// 	ft_putendl("pb");
// }

// void	ft_pa(t_data *data)
// {
// 	t_stack	*node;

// 	node = NULL;
// 	if (data->a != NULL)
// 	{
// 		data->a = get_head(data->a);
// 		if (data->b)
// 		{
// 			data->b = get_head(data->b);
// 			node = data->b;
// 			data->b = data->b->next;
// 			if (data->b)
// 				data->b->prev = NULL;
// 			data->a->prev = node;
// 			node->next = data->a;
// 		}
// 	}
// 	else
// 		node = pa_util(data, node);
// 	ft_putendl("pa");
// }
