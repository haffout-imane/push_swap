/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:44:16 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/23 17:16:31 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *stack_a, t_stack *stack_b, int len)
{
	if (check_sort(stack_a))
	{
		if (len == 2)
			sort_two(stack_a);
		else if (len == 3)
			sort_three(stack_a);
		else if (len == 4)
			sort_four(stack_a, stack_b);
		else if (len == 5)
			sort_five(stack_a, stack_b);
		else if (len > 5)
			sort_lots(stack_a, stack_b, len);
	}
}
