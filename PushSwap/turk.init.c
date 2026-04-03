/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 18:48:12 by enucci            #+#    #+#             */
/*   Updated: 2026/03/24 14:16:07 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	above_median(t_stack_node *node, int len)
{
	if (!node)
		return (false);
	if (node->index <= len / 2)
		return (true);
	else
		return (false);
}

void	set_index_and_median(t_stack_node **stack)
{
	int				len;
	int				i;
	t_stack_node	*current;

	if (!stack)
		return ;
	len = stack_len(*stack);
	current = *stack;
	i = 0;
	while (current)
	{
		current->index = i;
		current->above_median = (i <= len / 2);
		current = current->next;
		i++;
	}
}

void	init_nodes(t_stack_node *stack_a, t_stack_node *stack_b)
{
	set_index_and_median(&stack_a);
	set_index_and_median(&stack_b);
	set_target_node(stack_a, stack_b);
	set_push_cost(stack_a, stack_b);
	set_cheapest(stack_b);
}
