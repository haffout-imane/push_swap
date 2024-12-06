/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:35:30 by ihaffout          #+#    #+#             */
/*   Updated: 2024/04/06 15:00:55 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_len(char **av)
{
	int		i;
	int		j;
	int		len;
	char	**str;

	i = 1;
	len = 0;
	while (av[i])
	{
		j = 0;
		str = ft_split(av[i], 32);
		while (str[j])
		{
			len++;
			j++;
		}
		ft_free(str, j);
		i++;
	}
	return (len);
}

int	*ft_array(int len, char **av)
{
	int		i;
	int		j;
	int		h;
	int		*arr;
	char	**str;

	arr = malloc(len * sizeof(int));
	if (!arr)
		free(arr);
	i = 1;
	h = 0;
	while (av[i])
	{
		j = 0;
		if (!check_spaces(av[i]))
			ft_exit();
		str = ft_split(av[i], 32);
		while (str[j])
			arr[h++] = ft_atoi(str[j++]);
		ft_free(str, j);
		i++;
	}
	if (!check_repetition(arr, len))
		ft_exit();
	return (arr);
}

t_stack	*ft_allocate(t_stack *stack, int len)
{
	stack = malloc(sizeof(t_stack));
	stack->array = malloc(sizeof(int) * len);
	if (!stack->array)
		free(stack->array);
	return (stack);
}

t_stack	*ft_fill_stack(t_stack *stack, int *arr, int len)
{
	int	i;

	i = 0;
	while (len > 0)
		stack->array[i++] = arr[--len];
	return (stack);
}
