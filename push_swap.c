/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:51:24 by ihaffout          #+#    #+#             */
/*   Updated: 2024/04/06 19:45:20 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **av)
{
	int		len;
	int		*arr;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	len = ft_len(av);
	arr = ft_array(len, av);
	a = ft_allocate(a, len);
	b = ft_allocate(b, len);
	a = ft_fill_stack(a, arr, len);
	a->top = len - 1;
	b->top = -1;
	sort(a, b, len);
	free(arr);
	free(a->array);
	free(a);
	free(b->array);
	free(b);
}
