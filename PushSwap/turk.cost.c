/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 21:50:04 by enucci            #+#    #+#             */
/*   Updated: 2026/03/10 21:42:16 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	calculate_node_cost(t_stack_node *b, int len_a, int len_b)
{
	int	cost_b;
	int	cost_a;

	if (b->above_median)
		cost_b = b->index;
	else
		cost_b = len_b - b->index;
	if (b->target_node->above_median)
		cost_a = b->target_node->index;
	else
		cost_a = len_a - b->target_node->index;
	if ((b->above_median && b->target_node->above_median)
		|| (!b->above_median && !b->target_node->above_median))
	{
		if (cost_b > cost_a)
			b->push_cost = cost_b;
		else
			b->push_cost = cost_a;
	}
	else
		b->push_cost = cost_b + cost_a;
}

void	set_push_cost(t_stack_node *stack_a, t_stack_node *stack_b)
{
	t_stack_node	*b;
	int				len_b;
	int				len_a;

	len_b = stack_len(stack_b);
	len_a = stack_len(stack_a);
	b = stack_b;
	while (b)
	{
		calculate_node_cost(b, len_a, len_b);
		b = b->next;
	}
}

void	set_cheapest(t_stack_node *stack)
{
	t_stack_node	*cheapest;
	int				min_cost;

	if (!stack)
		return ;
	cheapest = NULL;
	min_cost = INT_MAX;
	while (stack)
	{
		stack->cheapest = false;
		if (stack->push_cost < min_cost)
		{
			min_cost = stack->push_cost;
			cheapest = stack;
		}
		stack = stack->next;
	}
	if (cheapest)
		cheapest->cheapest = true;
}
