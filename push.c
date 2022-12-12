/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:39:41 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/12 17:44:49 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    moving_b(t_stack *stack)
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
        moving_b(stack);
    else
        free(stack->num_b);
}

void    moving_a(t_stack *stack)
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

void    doing_b(t_stack *stack)
{
    int i;
    int *temp;

    i = 0;
    temp = malloc(sizeof(int) * (stack->len_b));
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
    }
    else
        doing_b(stack);
    stack->len_b++;
    if (stack->len_a > 1)
        moving_a(stack);
    else
    {
        free(stack->num_a);
    }
}
