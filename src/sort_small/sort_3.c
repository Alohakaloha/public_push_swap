/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:36:05 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 18:38:46 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	min_start(t_list **stack, int min)
{
	t_list	*head;

	head = *stack;
	if (head->index == min)
	{
		sa(stack);
		ra(stack);
	}
}

static void	max_start(t_list **stack, int max, int min)
{
	t_list	*head;

	head = *stack;
	if (head->index == max && head->next->index != min)
	{
		ra(stack);
		sa(stack);
	}
	else if (head->index == max && head->next->index == min)
	{
		ra(stack);
	}
}

static void	mid_start(t_list **stack, int max)
{
	t_list	*head;

	head = *stack;
	if (head->next->index == max)
	{
		ra(stack);
		ra(stack);
	}
	else
	{
		sa(stack);
	}
}

/* 123, 132 , 213 , 231, 321, 312 */
void	sort_3(t_list **stack)
{
	t_list	*head;
	int		max;
	int		min;

	head = *stack;
	max = find_biggest(stack);
	min = find_smallest(stack);
	if (head->index == min)
		min_start(stack, min);
	else if (head->index == max)
		max_start(stack, max, min);
	else
		mid_start(stack, max);
}
