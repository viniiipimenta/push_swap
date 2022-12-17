/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:04:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/17 18:30:26 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void printing(t_stack *stack)
// {
// 	int i;

// 	i = 0;
// 	while (i < stack->len)
// 	{
// 		printf("%d\n", stack->num[i]);
// 		i++;
// 	}
// 	printf("STACK A\n");
// 	printf("\n-----------------------------------\n\n");
// }

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	stack_a;
	t_stack	stack_b;

	i = 1;
	stack_a.len = argc - 1;
	stack_b.len = 0;
	if (argc < 3)
		return (0);
	while (argv[i])
		check_num(argv[i++]);
	stack_a.num = malloc(sizeof(int) * stack_a.len);
	ft_stack(argv, &stack_a);
	check_repeat(argc - 1, &stack_a);
	if (check_sort(&stack_a, argc - 1) == 1)
	{
		free(stack_a.num);
		return (0);
	}
	sort_to_index(&stack_a);
	sorting(&stack_a, &stack_b, (argc - 1));
	if (stack_a.num)
		free(stack_a.num);
	return (0);
}
