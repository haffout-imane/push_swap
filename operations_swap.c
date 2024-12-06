/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:13:11 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 06:51:55 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a, int nbr)
{
	int	tmp;

	if (stack_a->top <= 0)
		return ;
	tmp = stack_a->array[stack_a->top];
	stack_a->array[stack_a->top] = stack_a->array[stack_a->top - 1];
	stack_a->array[stack_a->top - 1] = tmp;
	if (nbr)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b, int nbr)
{
	int	tmp;

	if (stack_b->top <= 0)
		return ;
	tmp = stack_b->array[stack_b->top];
	stack_b->array[stack_b->top] = stack_b->array[stack_b->top - 1];
	stack_b->array[stack_b->top - 1] = tmp;
	if (nbr)
		write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (nbr)
		write(1, "ss\n", 3);
}
