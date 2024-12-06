/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:23:15 by ihaffout          #+#    #+#             */
/*   Updated: 2024/04/06 15:37:35 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack_a, int nbr)
{
	int	i;
	int	j;
	int	tmp;

	if (stack_a->top <= 0)
		return ;
	i = stack_a->top;
	j = stack_a->top - 1;
	tmp = stack_a->array[stack_a->top];
	while (i > 0)
		stack_a->array[i--] = stack_a->array[j--];
	stack_a->array[i] = tmp;
	if (nbr)
		write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b, int nbr)
{
	int	i;
	int	j;
	int	tmp;

	if (stack_b->top <= 0)
		return ;
	i = stack_b->top;
	j = stack_b->top - 1;
	tmp = stack_b->array[stack_b->top];
	while (i > 0)
		stack_b->array[i--] = stack_b->array[j--];
	stack_b->array[i] = tmp;
	if (nbr)
		write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b, int nbr)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (nbr)
		write(1, "rr\n", 3);
}
