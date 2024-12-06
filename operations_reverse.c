/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:23:06 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 06:51:30 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack_a, int nbr)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	if (stack_a->top <= 0)
		return ;
	tmp = stack_a->array[i];
	while (i < stack_a->top)
		stack_a->array[i++] = stack_a->array[j++];
	stack_a->array[i] = tmp;
	if (nbr)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b, int nbr)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	if (stack_b->top <= 0)
		return ;
	tmp = stack_b->array[i];
	while (i < stack_b->top)
		stack_b->array[i++] = stack_b->array[j++];
	stack_b->array[i] = tmp;
	if (nbr)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	if (nbr)
		write(1, "rrr\n", 4);
}
