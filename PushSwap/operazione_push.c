/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operazione_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 21:38:49 by enucci            #+#    #+#             */
/*   Updated: 2026/03/07 22:08:52 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack_node **dest, t_stack_node **source)
{
	t_stack_node	*node_to_push;

	if (!*source)
		return ;
	node_to_push = *source;
	*source = (*source)->next;
	if (*source)
		(*source)->prev = NULL;
	node_to_push->prev = NULL;
	node_to_push->next = *dest;
	if (*dest)
		(*dest)->prev = node_to_push;
	*dest = node_to_push;
}

void	pa(t_stack_node **a, t_stack_node **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack_node **b, t_stack_node **a)
{
	push(b, a);
	ft_printf("pb\n");
}
