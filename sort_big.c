/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:19:06 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/17 18:51:49 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_stack *stack_a, t_stack *stack_b)
{
    int	size;
	int	bits;
	int	i;

	bits = 0;
	i = 0;
	size = stack_a->len;
	while (!check_sort(stack_a, stack_a->len))
	{
		i = 0;
		while (i < size)
		{
			if (((stack_a->num[stack_a->len - 1] >> bits) & 1) == 1)
				rotate(1, stack_a);
			else
				push(stack_b, stack_a, 2);
			i++;
		}
		while (stack_b->len > 0)
			push(stack_a, stack_b, 1);
		bits++;
	}
}
