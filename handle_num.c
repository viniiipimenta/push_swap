/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/11/16 14:12:00 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_stack(char **value, int argc)
{
	t_stack	stack;
	int		i;

	i = 1;
	stack.num_a = (int *) malloc(sizeof(int) * (argc - 1));
	while (value[i])
	{
		stack.num_a[i - 1] = ft_atoi(value[i]);
		i++;
	}
}
