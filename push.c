/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:39:41 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/11 14:58:44 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    clean_b(t_stack *stack)
{
    int i;
    int *temp;

    i = 1;
    temp = malloc(sizeof(int) * (stack->len_b - 1));
    while (i  < stack->len_b)
    {
        temp[i - 1] = stack->num_b[i];
        i++;
    }
    free(stack->num_b);
    stack->len_b--;
    stack->num_b = malloc(sizeof(int) * stack->len_b);
    i = 0;
    while (i  < stack->len_b)
    {
        stack->num_b[i] = temp[i];
        i++;
    }
    free(temp);
}

void    pa(t_stack *stack)
{
    int i;

    i = stack->len_a + 1;
    stack->num_a = malloc(sizeof(int));
    while (i > 0)
    {
        stack->num_a[i] = stack->num_a[i - 1];
        i--;
    }
    stack->len_a++;
    stack->num_a[0] = stack->num_b[0];
    if(stack->len_b > 1)
        clean_b(stack);
    else
        free(stack->num_b);
}

void    clean_b(t_stack *stack)
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

void    pb(t_stack *stack)
{
    int i;

    i = stack->len_b + 1;
    stack->num_b = malloc(sizeof(int));
    while (i > 0)
    {
        stack->num_b[i] = stack->num_b[i - 1];
        i--;
    }
    stack->len_b++;
    stack->num_b[0] = stack->num_a[0];
    if(stack->len_a > 1)
        clean_a(stack);
    else
        free(stack->num_a);
}