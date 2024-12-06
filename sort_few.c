/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:49:35 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 08:13:30 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack_a)
{
	if (stack_a->array[stack_a->top] > stack_a->array[0])
		sa(stack_a, 1);
	return ;
}

void	sort_three(t_stack *stack_a)
{
	int	i;
	int	max;

	i = 0;
	if (check_sort(stack_a))
	{
		max = stack_a->array[0];
		while (++i <= stack_a->top)
		{
			if (max < stack_a->array[i])
				max = stack_a->array[i];
		}
		if (stack_a->array[stack_a->top] == max)
			ra(stack_a, 1);
		else if (stack_a->array[1] == max)
			rra(stack_a, 1);
		if (stack_a->array[stack_a->top] > stack_a->array[1])
			sa(stack_a, 1);
	}
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	int	min;

	if (check_sort(stack_a))
	{
		min = check_min(stack_a);
		if (stack_a->array[2] == min)
			ra(stack_a, 1);
		if (stack_a->array[1] == min)
			rra(stack_a, 1);
		if (stack_a->array[0] == min)
			rra(stack_a, 1);
		if (check_sort(stack_a))
		{
			pb(stack_a, stack_b, 1);
			sort_three(stack_a);
			pa(stack_a, stack_b, 1);
		}
	}
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	min;

	if (check_sort(stack_a))
	{
		min = check_min(stack_a);
		if (stack_a->array[3] == min)
			ra(stack_a, 1);
		if (stack_a->array[2] == min)
			rra(stack_a, 1);
		if (stack_a->array[1] == min)
			rra(stack_a, 1);
		if (stack_a->array[0] == min)
			rra(stack_a, 1);
		if (check_sort(stack_a))
		{
			pb(stack_a, stack_b, 1);
			sort_four(stack_a, stack_b);
			pa(stack_a, stack_b, 1);
		}
	}
}
