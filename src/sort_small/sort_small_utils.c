/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:35:30 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 18:45:13 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_biggest(t_list **stack)
{
	t_list	*head;
	int		tmp;

	head = *stack;
	tmp = head->index;
	while (head)
	{
		if (head->index > tmp)
			tmp = head->index;
		head = head->next;
	}
	return (tmp);
}

int	find_smallest(t_list **stack)
{
	t_list	*head;
	int		tmp;

	head = *stack;
	tmp = head->index;
	while (head)
	{
		if (head->index < tmp)
			tmp = head->index;
		head = head->next;
	}
	return (tmp);
}

int	get_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

//checks if the stack is sorted
int	check_stack(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->index > head->next->index)
			return (0);
		head = head->next;
	}
	return (1);
}
