/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:01:07 by enucci            #+#    #+#             */
/*   Updated: 2026/03/18 20:59:06 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack_node **stack_a)
{
	t_stack_node	*max;

	max = find_max(*stack_a);
	if (max == *stack_a)
		ra(stack_a);
	else if ((*stack_a)->next == max)
		rra(stack_a);
	if ((*stack_a)->nbr > (*stack_a)->next->nbr)
		sa(stack_a);
}

static void	min_on_top(t_stack_node **stack_a)
{
	t_stack_node	*min;
	t_stack_node	*current;
	int				pos;
	int				len;

	min = find_min(*stack_a);
	current = *stack_a;
	pos = 0;
	while (current != min)
	{
		current = current->next;
		pos++;
	}
	len = stack_len(*stack_a);
	if (pos <= len / 2)
	{
		while (pos-- > 0)
			ra(stack_a);
	}
	else
	{
		while (pos++ < len)
			rra(stack_a);
	}
}

static void	push_min_to_b(t_stack_node **stack_a, t_stack_node **b)
{
	t_stack_node	*current;
	int				pos;
	int				len;

	current = *stack_a;
	pos = 0;
	while (current)
	{
		if (current->nbr == find_min(*stack_a)->nbr)
			break ;
		current = current->next;
		pos++;
	}
	len = stack_len(*stack_a);
	if (pos <= len / 2)
		while (pos-- > 0)
			ra(stack_a);
	else
		while (pos++ < len)
			rra(stack_a);
	pb(b, stack_a);
}

void	sort_five(t_stack_node **stack_a, t_stack_node **b)
{
	while (stack_len(*stack_a) > 3)
		push_min_to_b(stack_a, b);
	sort_three(stack_a);
	while (stack_len(*b) > 0)
		pa(stack_a, b);
	min_on_top(stack_a);
}

void	sort_turk(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	len;

	len = stack_len(*stack_a);
	while (len-- > 3)
		pb(stack_b, stack_a);
	sort_three(stack_a);
	while (*stack_b)
	{
		init_nodes(*stack_a, *stack_b);
		move_nodes(stack_a, stack_b);
	}
	set_index_and_median(stack_a);
	min_on_top(stack_a);
}
