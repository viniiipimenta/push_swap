/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/11/14 11:58:15 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include <stdio.h>
void    ft_stack(char **value, int argc)
{
    stack   stack;
    int     i;
    int     j;

    i = 1;
    j = 0;
    stack.num_a = (int *) malloc(sizeof(int) * (argc - 1));
    while (value[i])
    {
        stack.num_a[j] = ft_atoi(value[i]);
        printf("%d\n", stack.num_a[j]);
        i++;
        j++;
    }
    stack.len_a = j;
}
