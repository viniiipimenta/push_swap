/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:30:44 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 09:52:12 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int print, t_stack *stack)
{
	int	counter;
	int	swap;

	swap = stack->num[0];
	counter = 0;
	while (counter < stack->len)
	{
		stack->num[counter] = stack->num[counter + 1];
		counter++;
	}
	stack->num[stack->len - 1] = swap;
	if (print == 1)
		ft_putstr_fd("ra\n", 1);
	else if (print == 2)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(0, stack_a);
	rotate(0, stack_b);
	ft_putstr_fd("rr\n", 1);
}
