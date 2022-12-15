/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:21:24 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/15 15:07:14 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turn_index(t_stack *stack, int *sorted)
{
	int	i;
	int	j;
	int	*temp;

	i = 0;
	j = 0;
	temp = malloc(sizeof(int) * stack->len_a);
	while (i < stack->len_a)
	{
		while (j < stack->len_a)
		{
			if (stack->num_a[i] == sorted[j])
				temp[i] = j;
			j++;
		}
		i++;
		j = 0;
	}
	i = 0;
	while (i < stack->len_a)
	{
		stack->num_a[i] = temp[i];
		i++;
	}
	free(temp);
}

void	sort_to_index(t_stack *stack)
{
	int	i;
	int	temp;
	int	*sorted;

	i = 0;
	sorted = malloc(sizeof(int) * stack->len_a);
	while (i < stack->len_a)
	{
		sorted[i] = stack->num_a[i];
		i++;
	}
	i = 0;
	while (i < (stack->len_a - 1))
	{
		if (sorted[i] > sorted[i + 1])
		{
			temp = sorted[i];
			sorted[i] = sorted[i + 1];
			sorted[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	turn_index(stack, sorted);
	free(sorted);
}
