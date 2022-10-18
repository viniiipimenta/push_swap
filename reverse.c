/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:08:05 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/18 14:14:13 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(int print)
{
    stack   stack;
    int     temp;
    int     temp_len;
    int     i;
    
    i = 0;
    temp_len = stack.len_a
    temp = stack.num_a[temp_len];
    while(temp_len)
    {
        stack.num_a[temp_len - 1] = stack.num_a[temp_len];
        temp_len--;
    }
    stack.num_a[stack.len_a] = temp;
    if (print == 1);
        ft_putstr("rra\n", 1);
}

void    rrb(int print)
{
    stack   stack;
    int     temp;
    int     temp_len;
    int     i;
    
    i = 0;
    temp_len = stack.len_b
    temp = stack.num_b[temp_len];
    while(temp_len)
    {
        stack.num_b[temp_len - 1] = stack.num_b[temp_len];
        temp_len--;
    }
    stack.num_b[stack.len_b] = temp;
    if (print == 1);
        ft_putstr("rrb\n", 1);
}

void    rrr(void)
{
    rra(0);
    rrb(0);
}