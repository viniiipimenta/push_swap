/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:04:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/12 16:22:34 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void	sorting(t_stack stack, int len)
// {
	
// }

void printing(t_stack *stack)
{
	int i;

	i = 0;
	while (i < stack->len_a)
	{
		printf("%d\n", stack->num_a[i]);
		i++;
	}
	printf("STACK A\n");
	printf("\n-----------------------------------\n\n");
	i = 0;
	while (i < stack->len_b)
	{
		printf("%d\n", stack->num_b[i]);
		i++;
	}
	printf("STACK B\n\n\n");
}

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	i = 1;
	stack.len_a = argc - 1;
	stack.len_b = 0;
	if (argc < 3)
		return (0);
	while (argv[i])
		check_num(argv[i++]);
	stack.num_a = malloc(sizeof(int) * stack.len_a);
	ft_stack(argv, &stack);
	check_repeat(argc - 1, &stack);
	printing(&stack);
	pb(&stack);
	pb(&stack);
	pb(&stack);
	printing(&stack);
	check_sort(&stack, argc - 1);
	free(stack.num_a);
	free(stack.num_b);
	return (0);
}
