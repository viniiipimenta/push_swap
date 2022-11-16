/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:04:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/11/16 14:12:30 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	i = 1;
	if (argc == 1)
		return (0);
	while (argv[i])
	{
		check_num(argv[i]);
		i++;
	}
	ft_stack(argv, argc);
	check_repeat(argc - 1);
	free(stack.num_a);
	free(stack.num_b);
	return (0);
}
