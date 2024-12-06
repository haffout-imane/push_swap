/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:22:49 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 06:56:16 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	if (stack_b->top < 0)
		return ;
	stack_a->top++;
	stack_a->array[stack_a->top] = stack_b->array[stack_b->top];
	stack_b->top--;
	if (nbr)
		write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	if (stack_a->top < 0)
		return ;
	stack_b->top++;
	stack_b->array[stack_b->top] = stack_a->array[stack_a->top];
	stack_a->top--;
	if (nbr)
		write(1, "pb\n", 3);
}
