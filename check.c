/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 15:26:15 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	check_sort(t_stack *stack, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < len)
	{
		if (stack->num[j] > stack->num[i])
		{
			i++;
			j++;
		}
		else
			return (0);
	}
	return (1);
}

void	check_repeat(int len, t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < len)
	{
		while (j < len)
		{
			if (stack->num[i] == stack->num[j])
			{
				ft_putstr_fd("Error\n", 1);
				exit(0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	check_limit(long len)
{
	if (len > 2147483647 || len < -2147483648)
	{
		ft_putstr_fd("Error\n", 1);
		exit(0);
	}
}

void	check_num(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (ft_isdigit(num[i]) == 0)
		{
			ft_putstr_fd("Error\n", 1);
			exit(0);
		}
		if ((num[i] == '-' || num[i] == '+')
			&& !(num[i + 1] >= '0' && num[i + 1] <= '9'))
		{
			ft_putstr_fd("Error\n", 1);
			exit(0);
		}
		i++;
	}
}
