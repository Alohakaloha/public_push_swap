/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:35:38 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 18:45:43 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_small(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	if (ft_lstsize(*stack_a) == 3)
		sort_3(stack_a);
	if (ft_lstsize(*stack_a) == 4)
		sort_4(stack_a, stack_b);
	if (ft_lstsize(*stack_a) == 5)
		sort_5(stack_a, stack_b);
	return (0);
}
