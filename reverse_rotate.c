/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:45:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 09:52:10 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int print, t_stack *stack)
{
	int	counter;
	int	swap;

	swap = stack->num[stack->len - 1];
	counter = stack->len - 1;
	while (counter >= 0)
	{
		stack->num[counter + 1] = stack->num[counter];
		counter--;
	}
	stack->num[0] = swap;
	if (print == 1)
		ft_putstr_fd("rra\n", 1);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(0, stack_a);
	reverse_rotate(0, stack_b);
	ft_putstr_fd("rrb\n", 1);
}
