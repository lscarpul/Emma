/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 23:18:57 by enucci            #+#    #+#             */
/*   Updated: 2026/03/26 15:21:34 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_a(t_stack_node **a, char **argv)
{
	int		i;
	long	num;

	i = 0;
	while (argv[i])
	{
		if (syntax_error(argv[i]))
			stamp_error(a);
		if (argv[1] == NULL)
			stamp_error(a);
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			stamp_error(a);
		if (duplicate_error(*a, (int)num))
			stamp_error(a);
		append_node(a, (int)num);
		i++;
	}
}

void	append_node(t_stack_node **stack, int num)
{
	t_stack_node	*node;
	t_stack_node	*last;

	node = malloc(sizeof(t_stack_node));
	if (!node)
		stamp_error(stack);
	node->nbr = num;
	node->next = NULL;
	node->prev = NULL;
	if (!*stack)
	{
		*stack = node;
		return ;
	}
	last = find_last(*stack);
	last->next = node;
	node->prev = last;
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*next;

	if (!stack)
		return ;
	while (*stack)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
}
