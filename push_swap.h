/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:06:47 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 08:39:00 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*--------------------- utils ---------------------*/

typedef struct s_stack
{
	int	top;
	int	*array;

}		t_stack;

int		check_spaces(char *av);
int		check_sort(t_stack *stack);
int		check_min(t_stack *stack);
int		check_index(t_stack *stack, int nbr);
int		ft_atoi(char *str);
int		ft_len(char **av);
int		check_repetition(int *arr, int len);
int		*ft_array(int len, char **av);

char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);

void	ft_exit(void);
void	ft_free(char **str, int count);
void	push_swap(char **av);

size_t	ft_strlen(const char *s);

t_stack	*ft_allocate(t_stack *stack, int len);
t_stack	*ft_fill_stack(t_stack *stack, int *arr, int len);
t_stack	*ft_sort_stack(t_stack *tmp);

/*--------------------- operations ---------------------*/

//operations_swap:
void	sa(t_stack *stack_a, int nbr);
void	sb(t_stack *stack_b, int nbr);
void	ss(t_stack *stack_a, t_stack *stack_b, int nbr);

//operations_push:
void	pa(t_stack *stack_a, t_stack *stack_b, int nbr);
void	pb(t_stack *stack_a, t_stack *stack_b, int nbr);

//operations_rotate:
void	ra(t_stack *stack_a, int nbr);
void	rb(t_stack *stack_b, int nbr);
void	rr(t_stack *stack_a, t_stack *stack_b, int nbr);

//operations_reverse:
void	rra(t_stack *stack_a, int nbr);
void	rrb(t_stack *stack_b, int nbr);
void	rrr(t_stack *stack_a, t_stack *stack_b, int nbr);

/*--------------------- sort ---------------------*/

void	sort(t_stack *stack_a, t_stack *stack_b, int len);

//sort_few:
void	sort_two(t_stack *stack_a);
void	sort_three(t_stack *stack_a);
void	sort_four(t_stack *stack_a, t_stack *stack_b);
void	sort_five(t_stack *stack_a, t_stack *stack_b);

//sort_lots:
void	sort_lots(t_stack *stack_a, t_stack *stack_b, int cont);

#endif
