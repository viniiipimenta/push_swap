/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 09:52:01 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_stack(char **value, t_stack *stack)
{
	int	i;

	i = 1;
	while (value[i])
	{
		stack->num[i - 1] = ft_atoi(value[i]);
		i++;
	}
}
