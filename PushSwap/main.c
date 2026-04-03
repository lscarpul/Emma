/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 23:00:00 by enucci            #+#    #+#             */
/*   Updated: 2026/03/26 15:24:27 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	is_sorted(t_stack_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

static void	sort_stacks(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (stack_len(*stack_a) == 2)
		sa(stack_a);
	else if (stack_len(*stack_a) == 3)
		sort_three(stack_a);
	else if (stack_len(*stack_a) <= 5)
		sort_five(stack_a, stack_b);
	else
		sort_turk(stack_a, stack_b);
}

static void	parse_single_arg(t_stack_node **stack_a, char *str)
{
	char	**args;
	int		i;

	args = split_args(str);
	if (!args || !args[0])
	{
		stamp_error(stack_a);
		return ;
	}
	init_stack_a(stack_a, args);
	i = 0;
	while (args[i])
		free(args[i++]);
	free(args);
}

int	main(int argc, char **argv)
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		parse_single_arg(&stack_a, argv[1]);
	else
		init_stack_a(&stack_a, argv + 1);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	sort_stacks(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
