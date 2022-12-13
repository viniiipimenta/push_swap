/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:21:24 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/13 14:48:57 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sorting(t_stack *stack)
// {
// 	int	len;

// 	len = stack->len_a;
// 	if (len == 2)
// 		sa(1, stack);
// }

void	turn_index(t_stack *stack)
{
	int	i;
	int	j;
	int	minor;

	i = 0;
	j = 0;
	minor = 0;
	while (i < stack->len_a)
	{
		while (j < stack->len_a)
		{
			if (stack->num_a[i] > stack->num_a[j])
			{
				minor += 1;
			}
			j++;
		}
		stack->num_a[i] = minor;
		i++;
		j = 0;
		minor = 0;
	}
}