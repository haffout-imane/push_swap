/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:18:59 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 08:36:38 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	apply_operations(char *str, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strcmp(str, "pa\n"))
		pa(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "pb\n"))
		pb(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "sa\n"))
		sa(stack_a, 0);
	else if (ft_strcmp(str, "sb\n"))
		sb(stack_b, 0);
	else if (ft_strcmp(str, "ss\n"))
		ss(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "ra\n"))
		ra(stack_a, 0);
	else if (ft_strcmp(str, "rb\n"))
		rb(stack_b, 0);
	else if (ft_strcmp(str, "rr\n"))
		rr(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "rra\n"))
		rra(stack_a, 0);
	else if (ft_strcmp(str, "rrb\n"))
		rrb(stack_b, 0);
	else if (ft_strcmp(str, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else
		ft_exit();
}

void	check_operations(t_stack *stack_a, t_stack *stack_b, int len)
{
	char	*str;
	t_stack	*tmp;

	str = NULL;
	tmp = NULL;
	tmp = ft_allocate(tmp, len);
	tmp = ft_fill_stack(tmp, stack_a->array, len);
	tmp->top = len - 1;
	tmp = ft_sort_stack(tmp);
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		apply_operations(str, stack_a, stack_b);
		free(str);
	}
	if (check_stack_a(stack_a, tmp))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(tmp->array);
	free(tmp);
}

void	checker(char **av)
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
	check_operations(a, b, len);
	free(arr);
	free(a->array);
	free(a);
	free(b->array);
	free(b);
}
