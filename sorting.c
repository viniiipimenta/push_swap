/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:58:46 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/17 18:14:25 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_thee(t_stack *stack)
{
	if (stack->num[0] > stack->num[1] && stack->num[0] < stack->num[2])
		swap(1, stack);
	else if (stack->num[0] < stack->num[1] && stack->num[0] > stack->num[2])
		reverse_rotate(1, stack);
	else if (stack->num[0] < stack->num[1] && stack->num[1] > stack->num[2])
	{
		swap(1, stack);
		rotate(1, stack);
	}
	else if (stack->num[0] > stack->num[1] && stack->num[1] < stack->num[2])
		rotate(1, stack);
	else if (stack->num[0] > stack->num[1] && stack->num[1] > stack->num[2])
	{
		swap(1, stack);
		reverse_rotate(1, stack);
	}
}

void	optimize(t_stack *stack)
{
	if (stack->num[1] == 0)
		rotate(1, stack);
	else if (stack->num[2] == 0)
	{
		rotate(1, stack);
		rotate(1, stack);
	}
	else if (stack->num[3] == 0)
	{
		reverse_rotate(1, stack);
		reverse_rotate(1, stack);
	}
	else if (stack->num[4] == 0)
		reverse_rotate(1, stack);
}


void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	optimize(stack_a);
	push(stack_b, stack_a, 2);
	if (stack_a->num[1] == 1)
		rotate(1, stack_a);
	else if (stack_a->num[2] == 1)
	{
		rotate(1, stack_a);
		rotate(1, stack_a);
	}
	else if (stack_a->num[3] == 1)
		reverse_rotate(1, stack_a);
	push(stack_b, stack_a, 2);
	sort_thee(stack_a);
	push(stack_a, stack_b, 1);
	push(stack_a, stack_b, 1);
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->num[1] == 0)
		rotate(1, stack_a);
	else if (stack_a->num[2] == 0)
	{
		rotate(1, stack_a);
		rotate(1, stack_a);
	}
	else if (stack_a->num[3] == 0)
		reverse_rotate(1, stack_a);
	push(stack_b, stack_a, 2);
	sort_thee(stack_a);
	push(stack_a, stack_b, 1);
}

void	sorting(t_stack *stack_a, t_stack *stack_b, int len)
{
	if (len == 2)
		swap(1, stack_a);
	else if (len == 3)
		sort_thee(stack_a);
	else if (len == 4)
		sort_four(stack_a, stack_b);
	else if (len  == 5)
		sort_five(stack_a, stack_b);
	else if (len > 5)
		sort_big(stack_a, stack_b);
}