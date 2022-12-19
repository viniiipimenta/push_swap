/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:21:24 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 09:52:03 by mpimenta         ###   ########.fr       */
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
	temp = malloc(sizeof(int) * stack->len);
	while (i < stack->len)
	{
		while (j < stack->len)
		{
			if (stack->num[i] == sorted[j])
				temp[i] = j;
			j++;
		}
		i++;
		j = 0;
	}
	i = 0;
	while (i < stack->len)
	{
		stack->num[i] = temp[i];
		i++;
	}
	free(temp);
}

void	sort_to_index(t_stack *stack)
{
	int	i;
	int	temp;
	int	*sorted;

	i = -1;
	sorted = malloc(sizeof(int) * stack->len);
	while (++i < stack->len)
		sorted[i] = stack->num[i];
	i = 0;
	while (i < (stack->len - 1))
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
