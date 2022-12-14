/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:58:46 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/14 17:26:06 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_thee(t_stack *stack)
{
	if (stack->num_a[0] == 1 && stack->num_a[1] == 0)
		sa(1, stack);
	else if (stack->num_a[0] == 1 && stack->num_a[1] == 2)
		rra(1, stack);
	else if (stack->num_a[0] == 0)
	{
		sa(1, stack);
		ra(1, stack);
	}
	else if (stack->num_a[0] == 2 && stack->num_a[1] == 0)
		ra(1, stack);
	else if (stack->num_a[0] == 2 && stack->num_a[1] == 1)
	{
		sa(1, stack);
		rra(1, stack);
	}
}

void	sorting(t_stack *stack)
{
	int	len;

	len = stack->len_a;
	if (len == 2)
		sa(1, stack);
	else if (len == 3)
		sort_thee(stack);
}