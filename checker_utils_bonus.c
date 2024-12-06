/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:07:46 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 08:39:43 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_strcmp(char *str, char *operation)
{
	int	i;

	i = 0;
	while (str[i] && operation[i])
	{
		if (str[i] != operation[i])
			return (0);
		i++;
	}
	if (str[i] == '\0' && operation[i] == '\0')
		return (1);
	return (0);
}

int	check_stack_a(t_stack *stack_a, t_stack *tmp)
{
	int	i;

	i = stack_a->top;
	while (i >= 0)
	{
		if (stack_a->array[i] != tmp->array[i])
			return (0);
		i--;
	}
	return (1);
}
