/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:58:46 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/14 20:21:58 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_thee(t_stack *stack)
{
	if (stack->num_a[0] > stack->num_a[1] && stack->num_a[0] < stack->num_a[2])
		sa(1, stack);
	else if (stack->num_a[0] < stack->num_a[1] && stack->num_a[0] > stack->num_a[2])
		rra(1, stack);
	else if (stack->num_a[0] < stack->num_a[1] && stack->num_a[1] > stack->num_a[2])
	{
		sa(1, stack);
		ra(1, stack);
	}
	else if (stack->num_a[0] > stack->num_a[1] && stack->num_a[1] < stack->num_a[2])
		ra(1, stack);
	else if (stack->num_a[0] > stack->num_a[1] && stack->num_a[1] > stack->num_a[2])
	{
		sa(1, stack);
		rra(1, stack);
	}
}

void	sort_five(t_stack *stack)
{
	while (stack->num_a[0] != 0)
		ra(1, stack);
	pb(stack);
	while (stack->num_a[0] != 1)
		ra(1, stack);
	pb(stack);
	sort_thee(stack);
	pa(stack);
	pa(stack);
}

void	sorting(t_stack *stack)
{
	int	len;

	len = stack->len_a;
	if (len == 2)
		sa(1, stack);
	else if (len == 3)
		sort_thee(stack);
	else if (len < 6)
		sort_five(stack);
}