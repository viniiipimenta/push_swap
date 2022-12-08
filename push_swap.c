/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:04:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/08 16:30:27 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stack stack, int len)
{
	
}

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	i = 1;
	stack.len_a = argc - 1;
	if (argc < 3)
		return (0);
	while (argv[i])
		check_num(argv[i++]);
	stack.num_a = (int *) malloc(sizeof(int) * (argc - 1));
	ft_stack(argv, &stack);
	check_repeat(argc - 1, &stack);
	check_sort(&stack, argc - 1);
	free(stack.num_a);
	free(stack.num_b);
	return (0);
}
