/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lots.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:12:43 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 08:39:57 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_replace(t_stack *stack_a, t_stack *tmp, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (stack_a->array[i] == tmp->array[j])
			{
				stack_a->array[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_fill_b(t_stack *stack_a, t_stack *stack_b, int start, int end)
{
	while (stack_a->top >= 0)
	{
		if (stack_a->array[stack_a->top] <= start)
		{
			pb(stack_a, stack_b, 1);
			rb(stack_b, 1);
			start++;
			end++;
		}
		else if ((stack_a->array[stack_a->top] > start)
			&& (stack_a->array[stack_a->top] < end))
		{
			pb(stack_a, stack_b, 1);
			start++;
			end++;
		}
		else if (stack_a->array[stack_a->top] >= end)
			ra(stack_a, 1);
	}
}

void	ft_fill_a(t_stack *stack_a, t_stack *stack_b)
{
	int	minimum;
	int	middle;
	int	i;

	while (stack_b->top >= 0)
	{
		minimum = check_min(stack_b);
		i = check_index(stack_b, minimum);
		middle = stack_b->top / 2;
		if (i > middle)
		{
			while (stack_b->array[stack_b->top] != minimum)
				rb(stack_b, 1);
		}
		else
		{
			while (stack_b->array[stack_b->top] != minimum)
				rrb(stack_b, 1);
		}
		pa(stack_a, stack_b, 1);
	}
}

void	sort_lots(t_stack *stack_a, t_stack *stack_b, int len)
{
	int		i;
	int		start;
	int		end;
	t_stack	*tmp;

	tmp = NULL;
	start = 0;
	if (len > 5 && len <= 100)
		end = 15;
	else
		end = 30;
	tmp = ft_allocate(tmp, len);
	tmp = ft_fill_stack(tmp, stack_a->array, len);
	tmp->top = len - 1;
	tmp = ft_sort_stack(tmp);
	ft_replace(stack_a, tmp, len);
	i = stack_a->top;
	ft_fill_b(stack_a, stack_b, start, end);
	ft_fill_a(stack_a, stack_b);
	free(tmp->array);
	free(tmp);
}
