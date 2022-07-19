/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:27:45 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 18:32:29 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//functions return 1 if correct
int	errorcheck(int argc, char **argv)
{
	checkdigits(argv);
	checkint(argv);
	checkduplicates(argc, argv);
	if (checksorted(argv) == 0)
		exit (0);
	return (1);
}
