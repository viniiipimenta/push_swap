/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:20:39 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/18 13:53:32 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(int print)
{
    stack stack;
    int temp;

    temp = stack.num_a[0];
    stack.num_a[0] = stack.num_a[1];
    stack.num_a[1] = temp;
    if (print == 1)
        ft_putstr_fd("sa\n", 1);
}

void    sb(int print)
{
    stack stack;
    int temp;

    temp = stack.num_b[0];
    stack.num_b[0] = stack.num_b[1];
    stack.num_b[1] = temp;
    if (print == 1)
        ft_putstr_fd("sb\n", 1);
}

void    ss(void)
{
    sa(0);
    sb(0);
    ft_putstr_fd("ss\n", 1);
}
/*
void    pa(void)
{
    stack_a a;
    stack_b b;

    a.num = b.num;
}

void    pb(void)
{
    stack_a a;
    stack_b b;

    b.num = a.num;
}*/