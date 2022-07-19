/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:27:33 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/20 01:31:58 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//ft_isdigit returns 1 if correct
int	checkdigits_str(char **argv)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (j < ft_strlen(argv[i]))
		{
			if (argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			if (ft_isdigit(argv[i][j]) < 1)
			{
				write(1, "Error\n", 7);
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
		if (argv[i] == NULL)
			break ;
	}
	return (1);
}

int	checkint_str(char **argv)
{	
	int		i;
	long	temp;

	i = 0;
	while (argv[i])
	{
		temp = ft_atol(argv[i]);
		if (temp >= 2147483648 || temp < -2147483648)
		{
			write(1, "Error\n", 7);
			return (0);
		}
		i++;
	}
	return (1);
}

int	checkduplicates_str(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write(1, "Error\n", 7);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	checksorted_str(char **argv)
{
	int	index;
	int	not_sorted;

	not_sorted = 0;
	index = 0;
	while (argv[index + 1] != NULL)
	{
		if (ft_atoi(argv[index]) > ft_atoi(argv[index + 1]))
			not_sorted++;
		index++;
	}
	return (not_sorted);
}
