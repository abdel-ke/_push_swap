/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:14:35 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 19:42:52 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lst_new2(int nbr)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->nbr = nbr;
	head->next = NULL;
	return (head);
}

void	lstadd_back(t_stack **alst, t_stack *new)
{
	t_stack	*temp;

	if (!alst || !new)
		return ;
	temp = *alst;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
		new->prev = temp;
	}
	else
	{
		*alst = new;
		new->prev = NULL;
		new->next = NULL;
	}
}

void	lstdelone(t_stack *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	free(lst);
}

void	lstclear(t_stack **lst, void (*del)(void*))
{
	t_stack	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		lstdelone(temp, del);
	}
	*lst = NULL;
}
