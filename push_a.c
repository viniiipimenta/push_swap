/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:39:41 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/13 10:21:11 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    moving(t_stack *stack)
{
    int i;
    int *temp;

    i = 1;
    temp = malloc(sizeof(int) * (stack->len_a - 1));
    while (i  < stack->len_a)
    {
        temp[i - 1] = stack->num_a[i];
        i++;
    }
    free(stack->num_a);
    stack->len_a--;
    stack->num_a = malloc(sizeof(int) * stack->len_a);
    i = 0;
    while (i  < stack->len_a)
    {
        stack->num_a[i] = temp[i];
        i++;
    }
    free(temp);
}

void    mount(t_stack *stack)
{
    int i;
    int *temp;

    i = 0;
    temp = malloc(sizeof(int) * stack->len_b);
    while (i  < stack->len_b)
    {
        temp[i] = stack->num_b[i];
        i++;
    }
    free(stack->num_b);
    stack->len_b++;
    stack->num_b = malloc(sizeof(int) * stack->len_b);
    stack->num_b[0] = stack->num_a[0];
    i = 1;
    while (i  < stack->len_b)
    {
        stack->num_b[i] = temp[i - 1];
        i++;
    }
    free(temp);
}

void    pb(t_stack *stack)
{
    int i;

    i = stack->len_b + 1;
    if (i == 1)
    {
        stack->num_b = malloc(sizeof(int));
        stack->num_b[0] = stack->num_a[0];
        stack->len_b++;
    }
    else
        mount(stack);
    if (stack->len_a > 1)
        moving(stack);
    else if (stack->len_a == 1)
    {
        stack->len_a--;
        free(stack->num_a);
    }
}
