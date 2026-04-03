/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 22:00:00 by enucci            #+#    #+#             */
/*   Updated: 2026/03/24 14:19:29 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack_node	*get_cheapest(t_stack_node *stack)
{
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

static void	prep_for_push(t_stack_node **a, t_stack_node **b,
				t_stack_node *cheap)
{
	while (*b != cheap && *a != cheap->target_node)
	{
		if (cheap->above_median && cheap->target_node->above_median)
			rr(a, b);
		else if (!cheap->above_median && !cheap->target_node->above_median)
			rrr(a, b);
		else
			break ;
	}
	while (*b != cheap)
	{
		if (cheap->above_median)
			rb(b);
		else
			rrb(b);
	}
	while (*a != cheap->target_node)
	{
		if (cheap->target_node->above_median)
			ra(a);
		else
			rra(a);
	}
}

void	move_nodes(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheap;

	cheap = get_cheapest(*b);
	if (!cheap)
		return ;
	prep_for_push(a, b, cheap);
	pa(a, b);
}
