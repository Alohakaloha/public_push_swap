/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:10:32 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 18:49:00 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*find_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		found;

	min = NULL;
	found = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!found || head->data < min->data))
			{
				min = head;
				found = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	give_index(t_list **stack)
{
	t_list	*current;
	int		index;

	index = 0;
	current = find_min(stack);
	while (current)
	{
		current->index = index++;
		current = find_min(stack);
	}
}
