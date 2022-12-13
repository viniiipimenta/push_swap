/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:45:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/13 12:23:12 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int print, t_stack *stack)
{
	int	counter;
	int	swap;

	swap = stack->num_a[stack->len_a - 1];
	counter = stack->len_a - 1;
	while (counter >= 0)
	{
		stack->num_a[counter + 1] = stack->num_a[counter];
		counter--;
	}
	stack->num_a[0] = swap;
	if (print == 1)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(int print, t_stack *stack)
{
	int	counter;
	int	swap;

	swap = stack->num_b[stack->len_b - 1];
	counter = stack->len_b - 1;
	while (counter >= 0)
	{
		stack->num_b[counter + 1] = stack->num_b[counter];
		counter--;
	}
	stack->num_b[0] = swap;
	if (print == 1)
		ft_putstr_fd("rrb\n", 1);
}

void	rotate_rr(t_stack *stack)
{
	rra(0, stack);
	rrb(0, stack);
	ft_putstr_fd("rrb\n", 1);
}
