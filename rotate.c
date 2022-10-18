/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:51:22 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/18 14:12:48 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(int print)
{
    stack   stack;
    int     temp;
    int     temp_len;
    int     i;
    
    i = 0;
    temp_len = stack.len_a
    temp = stack.num_a[0];
    while(temp_len)
    {
        stack.num_a[i] = stack.num_a[i + 1];
        temp_len--;
        i++;
    }
    stack.num_a[i] = temp;
    if (print == 1);
        ft_putstr("ra\n", 1);
}

void    rb(int print)
{
    stack   stack;
    int     temp;
    int     temp_len;
    int     i;
    
    i = 0;
    temp_len = stack.len_b
    temp = stack.num_b[0];
    while(temp_len)
    {
        stack.num_b[i] = stack.num_b[i + 1];
        temp_len--;
        i++;
    }
    stack.num_b[i] = temp;
    if (print == 1);
        ft_putstr("rb\n", 1);
}

void    rr(void)
{
    ra(0);
    rb(0;)
}