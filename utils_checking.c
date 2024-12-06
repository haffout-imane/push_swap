/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_checking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:57:04 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/23 20:42:30 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_spaces(char *av)
{
	int	i;

	i = 0;
	if (av[0] == '\0' || (av[0] == ' ' && av[1] == '\0'))
		return (0);
	return (1);
}

int	check_repetition(int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sort(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->top)
	{
		if (stack->array[i] < stack->array[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	check_min(t_stack *stack)
{
	int	minimum;
	int	i;

	i = stack->top;
	minimum = stack->array[i];
	while (i >= 0)
	{
		if (minimum > stack->array[i])
			minimum = stack->array[i];
		i--;
	}
	return (minimum);
}

int	check_index(t_stack *stack, int nbr)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		if (stack->array[i] == nbr)
			return (i);
		i--;
	}
	return (0);
}
