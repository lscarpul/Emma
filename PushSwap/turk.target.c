/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 21:44:06 by enucci            #+#    #+#             */
/*   Updated: 2026/03/10 21:19:01 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_node(t_stack_node *stack_a, t_stack_node *stack_b)
{
	t_stack_node	*b;
	t_stack_node	*a;
	t_stack_node	*target;
	long			best;

	b = stack_b;
	while (b)
	{
		best = LONG_MAX;
		target = NULL;
		a = stack_a;
		while (a)
		{
			if (a->nbr > b->nbr && a->nbr < best)
			{
				best = a->nbr;
				target = a;
			}
			a = a->next;
		}
		if (!target)
			target = find_min(stack_a);
		b->target_node = target;
		b = b->next;
	}
}
