/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:27:22 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 19:49:23 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//ft_isdigit returns 1 if correct
int	checkdigits(char **argv)
{
	int		i;
	size_t	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (j < ft_strlen(argv[i]))
		{
			if (argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			if (ft_isdigit(argv[i][j]) < 1)
				write_error();
			j++;
		}
		j = 0;
		i++;
		if (argv[i] == NULL)
			break ;
	}
	return (1);
}

long	ft_atol(char *str)
{
	int		i;
	int		neg;
	long	res;

	if (!str)
		return (0);
	i = 0;
	neg = 0;
	res = 0;
	if (str[i] != '\0' && str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	if (neg == 1)
		return (-res);
	return (res);
}

int	checkint(char **argv)
{	
	int		i;
	long	temp;

	i = 1;
	while (argv[i])
	{
		temp = ft_atol(argv[i]);
		if (temp >= 2147483648)
			write_error();
		if (temp < -2147483648)
			write_error();
		i++;
	}
	return (1);
}

int	checkduplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				write_error();
			j++;
		}
		i++;
	}
	return (1);
}

int	checksorted(char **argv)
{
	int	index;
	int	not_sorted;

	not_sorted = 0;
	index = 1;
	while (argv[index + 1] != NULL)
	{
		if (ft_atoi(argv[index]) > ft_atoi(argv[index + 1]))
			not_sorted++;
		index++;
	}
	return (not_sorted);
}
