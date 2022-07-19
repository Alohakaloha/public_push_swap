/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:10:26 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 18:49:57 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_splits(char **str)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	while (i < size)
		free(str[i++]);
	free(str);
}

void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**splits;
	int		i;

	i = 0;
	if (argc == 2)
		splits = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		splits = argv;
	}
	while (splits[i])
	{
		new = ft_lstnew(ft_atoi(splits[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	if (argc == 2)
		free_splits(splits);
	give_index(stack);
}
