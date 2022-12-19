/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:21:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 09:52:08 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move(t_stack *stack_take)
{
	int	i;
	int	*temp;

	i = 1;
	temp = malloc(sizeof(int) * (stack_take->len - 1));
	while (i < stack_take->len)
	{
		temp[i - 1] = stack_take->num[i];
		i++;
	}
	free(stack_take->num);
	stack_take->len--;
	stack_take->num = malloc(sizeof(int) * stack_take->len);
	i = 0;
	while (i < stack_take->len)
	{
		stack_take->num[i] = temp[i];
		i++;
	}
	free(temp);
}

void	mounting(t_stack *stack_recive, t_stack *stack_take)
{
	int	i;
	int	*temp;

	i = 0;
	temp = malloc(sizeof(int) * stack_recive->len);
	while (i < stack_recive->len)
	{
		temp[i] = stack_recive->num[i];
		i++;
	}
	free(stack_recive->num);
	stack_recive->len++;
	stack_recive->num = malloc(sizeof(int) * stack_recive->len);
	stack_recive->num[0] = stack_take->num[0];
	i = 1;
	while (i < stack_recive->len)
	{
		stack_recive->num[i] = temp[i - 1];
		i++;
	}
	free(temp);
}

void	push(t_stack *stack_recive, t_stack *stack_take, int print)
{
	int	i;

	i = stack_recive->len + 1;
	if (i == 1)
	{
		stack_recive->num = malloc(sizeof(int));
		stack_recive->num[0] = stack_take->num[0];
		stack_recive->len++;
	}
	else
		mounting(stack_recive, stack_take);
	if (stack_take->len > 1)
		move(stack_take);
	else if (stack_take->len == 1)
	{
		stack_take->len--;
		free(stack_take->num);
	}
	if (print == 1)
		ft_putstr_fd("pa\n", 1);
	else if (print == 2)
		ft_putstr_fd("pb\n", 1);
}
