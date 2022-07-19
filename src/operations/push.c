/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:11:27 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 19:01:50 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty */
int	push(t_list **taken, t_list **pushed)
{
	t_list	*tmp;
	t_list	*from;
	t_list	*target;

	if (ft_lstsize(*taken) == 0)
		return (-1);
	target = *pushed;
	from = *taken;
	tmp = from;
	from = from->next;
	*taken = from;
	if (!target)
	{
		target = tmp;
		target->next = NULL;
		*pushed = target;
	}
	else
	{
		tmp->next = target;
		*pushed = tmp;
	}
	return (0);
}

int	pa(t_list **stack_b, t_list **stack_a)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
