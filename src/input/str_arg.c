/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:27:51 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/20 00:34:45 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	str_argument(char **argv)
{
	int		i;
	char	**splits;

	i = 0;
	if (!argv[1])
		exit(1);
	splits = ft_split(argv[1], ' ');
	while (splits[i])
		i++;
	if (!checkdigits_str(splits) || !checkint_str(splits)
		|| !checkduplicates_str(i, splits) || !checksorted_str(splits))
	{
		free_splits(splits);
		exit (0);
	}
	free_splits(splits);
	return (1);
}
