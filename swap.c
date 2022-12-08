/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:24:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/08 16:31:21 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(int print, t_stack *stack)
{
    int temp;

    temp = stack->num_a[0];
    stack->num_a[0] = stack->num_a[1];
    stack->num_a[1] = temp;
    if (print == 1)
        ft_putstr_fd("sa\n", 1);
}

void sb(int print, t_stack *stack)
{
    int temp;

    temp = stack->num_b[0];
    stack->num_b[0] = stack->num_b[1];
    stack->num_b[1] = temp;
    if (print == 1)
        ft_putstr_fd("sb\n", 1);
}

void    ss(t_stack *stack)
{
    sa(0, stack);
    sb(0, stack);
    ft_putstr_fd("ss\n", 1);
}