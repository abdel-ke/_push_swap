/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:11:37 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 16:51:47 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display(t_data *data)
{
		int i = 0;
		printf("T\t");
		while (i < data->count_table)
			printf("[%d]\t", data->tab[i++]);
		puts("");
		i = 0;
		printf("A\t");
		while (i < data->index_a)
			printf("[%d]\t", data->tab_a[i++]);
		puts("");
		i = 0;
		printf("B\t");
		while (i < data->index_b)
			printf("|%d|\t", data->tab_b[i++]);
		puts("");
}

// void	display(t_data *data)
// {
// 	t_stack *a;
// 	t_stack *b;

// 	a = data->a;
// 	b = data->b;
// 	puts(" _______________________________________________________________ ");
// 	puts("|				|				|");
// 	puts("|		A		|		B		|");
// 	puts("|_______________________________|_______________________________|");
// 	while (a != NULL && b != NULL)
// 	{
// 		  puts("|				|				|");
// 		printf("|		%d		|		%d		|\n", a->nbr, b->nbr);
// 		puts("|_______________________________|_______________________________|");
// 		a = a->next;
// 		b = b->next;
// 	}
// 	if (a)
// 	{
// 		while (a)
// 		{
// 			  puts("|				|				|");
// 			printf("|		%d		|				|\n", a->nbr);
// 			puts("|_______________________________|_______________________________|");
// 			a = a->next;
// 		}
// 	}
// 	else if (b)
// 	{
// 		while (b)
// 		{
// 			  puts("|				|				|");
// 			printf("|				|		%d		|\n", b->nbr);
// 			puts("|_______________________________|_______________________________|");
// 			b = b->next;
// 		}
// 	}
// 	puts("");
// }