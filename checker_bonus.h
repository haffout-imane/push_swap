/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:02:05 by ihaffout          #+#    #+#             */
/*   Updated: 2024/03/25 08:38:04 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "push_swap.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strcmp(char *str, char *operation);
int		check_stack_a(t_stack *stack_a, t_stack *tmp);

char	*ft_freee(char *buffer);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

void	check_operations(t_stack *stack_a, t_stack *stack_b, int len);
void	checker(char **av);
void	apply_operations(char *str, t_stack *stack_a, t_stack *stack_b);
void	ft_bzero(void *s, size_t n);

#endif
