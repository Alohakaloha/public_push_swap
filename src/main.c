/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:09:38 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 19:03:25 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//startet with only numbers as input and for checker I need a string input
static int	checking(int argc, char **argv)
{
	int	error;

	if (argc == 2)
		error = str_argument(argv);
	else
		error = errorcheck(argc, argv);
	if (error < 1)
		exit(1);
	else
		return (0);
}
/* 
static void	test(t_list **stack_a, t_list **stack_b)
{
	printList(*stack_a);
	rra(stack_a);
	printList(*stack_a);
}*/

//add printList function to check up on the stack
int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		exit(1);
	checking(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	if (ft_lstsize(*stack_a) <= 5)
		sort_small(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
