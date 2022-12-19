/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:24:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 09:52:15 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int print, t_stack *stack)
{
	int	temp;

	temp = stack->num[0];
	stack->num[0] = stack->num[1];
	stack->num[1] = temp;
	if (print == 1)
		ft_putstr_fd("sa\n", 1);
	else if (print == 2)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(0, stack_a);
	swap(0, stack_b);
	ft_putstr_fd("ss\n", 1);
}
