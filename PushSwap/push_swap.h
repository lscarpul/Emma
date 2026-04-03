/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:23:49 by enucci            #+#    #+#             */
/*   Updated: 2026/03/07 22:12:53 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

//operazioni
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **b, t_stack_node **a);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);

//utils
int				stack_len(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
long			ft_atol(const char *str);

//stack
void			init_stack_a(t_stack_node **a, char **argv);
void			append_node(t_stack_node **stack, int num);
void			free_stack(t_stack_node **stack);

//errori
void			stamp_error(t_stack_node **a);
int				syntax_error(char *str);
int				duplicate_error(t_stack_node *a, int nbr);

char			**split_args(char *str);

//sort
void			sort_three(t_stack_node **stack_a);
void			sort_five(t_stack_node **stack_a, t_stack_node **b);
void			sort_turk(t_stack_node **stack_a, t_stack_node **stack_b);

//algoritmi
bool			above_median(t_stack_node *node, int len);
void			set_index_and_median(t_stack_node **stack);
void			init_nodes(t_stack_node *stack_a, t_stack_node *stack_b);
void			set_target_node(t_stack_node *stack_a, t_stack_node *stack_b);
void			set_push_cost(t_stack_node *stack_a, t_stack_node *stack_b);
void			set_cheapest(t_stack_node *stack);
void			move_nodes(t_stack_node **a, t_stack_node **b);

#endif