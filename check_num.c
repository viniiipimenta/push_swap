/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/11/14 14:36:08 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void check_limit(void)
{
    stack   stack;
    int     i;

    i = 0;
    while(stack.num_a[i])
    {
        if (stack.num_a[i] > 2147483647 || stack.num_a[i] < -2147483648)
        {
            ft_putstr_fd("Error limit\n", 1);
            exit(0);
        }
        i++;
    }
}

void check_num(char *num)
{
    int i;

    i = 0;
    while (num[i])
    {
        if (ft_isdigit(num[i]) == 0)
        {
            ft_putstr_fd("Error\n", 1);
            exit(0);
        }
        i++;
    }
}