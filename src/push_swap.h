/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnguyen <dnguyen@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:02:52 by dnguyen           #+#    #+#             */
/*   Updated: 2022/07/19 19:02:54 by dnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}t_list;

//util
long	ft_atol(char *str);
int		check_stack(t_list **stack);
//checkinput -> integer / str input
int		checkduplicates(int argc, char **argv);
int		checkdigits(char **argv);
int		checkint(char **argv);
int		checksorted(char **argv);
int		write_error(void);
//str input
int		str_argument(char **argv);
int		checkduplicates_str(int argc, char **argv);
int		checkdigits_str(char **argv);
int		checkint_str(char **argv);
int		checksorted_str(char **argv);
//main
int		errorcheck(int argc, char **argv);
void	init_stack(t_list **stack_a, int argc, char **argv);
void	give_index(t_list **stack);
int		sort_small(t_list **stack_a, t_list **stack_b);
//list_functions
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_back(t_list **stack, t_list *new);
int		ft_lstsize(t_list *head);
void	printList(t_list *head);
void	free_stack(t_list **stack);
//moves
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		push(t_list **old, t_list **new);
int		pa(t_list **stack_b, t_list **stack_a);
int		pb(t_list **stack_a, t_list **stack_b);
int		rotate(t_list **stack);
int		ra(t_list **stack);
int		rb(t_list **stack);
int		rr(t_list **stack_a, t_list **stack_b);
int		reverse_rotate(t_list **stack);
int		rra(t_list **stack);
int		rrb(t_list **stack);
int		rrr(t_list **stack_a, t_list **stack_b);
//sorting
void	sort_3(t_list **stack);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_big(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
int		find_biggest(t_list **stack);
int		find_smallest(t_list **stack);
int		get_distance(t_list **stack, int index);

#endif