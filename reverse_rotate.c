/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:45:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/08 18:04:58 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rra(int print, t_stack *stack)
{
    int counter;
    int swap;

    swap = stack->num_b[stack->len_a];
    counter = stack->len_a;
    while (counter > 0)
    {
        stack->num_a[counter - 1] = stack->num_a[counter];
        counter--;
    }
    stack->num_a[0] = swap;
    if (print == 1)
        ft_putstr_fd("rra\n", 1);
}

void rrb(int print, t_stack *stack)
{
    int counter;
    int swap;

    swap = stack->num_b[stack->len_a];
    counter = stack->len_b;
    while (counter > 0)
    {
        stack->num_b[counter - 1] = stack->num_b[counter];
        counter--;
    }
    stack->num_b[0] = swap;
    if (print == 1)
        ft_putstr_fd("rrb\n", 1);
}

void rrr(t_stack *stack)
{
    rra(0, stack);
    rrb(0, stack);
    ft_putstr_fd("rrb\n", 1);
}