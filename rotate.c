/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:30:44 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/08 16:51:10 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ra(int print, t_stack *stack)
{
    int counter;
    int swap;

    swap = stack->num_a[0];
    counter = 0;
    while (counter < stack->len_a)
    {
        stack->num_a[counter] = stack->num_a[counter + 1];
        counter++;
    }
    stack->num_a[stack->len_a] = swap;
    if (print == 1)
        ft_putstr_fd("ra\n", 1);
}

void rb(int print, t_stack *stack)
{
    int counter;
    int swap;

    swap = stack->num_b[0];
    counter = 0;
    while (counter < stack->len_b)
    {
        stack->num_b[counter] = stack->num_b[counter + 1];
        counter++;
    }
    stack->num_b[stack->len_b] = swap;
    if (print == 1)
        ft_putstr_fd("rb\n", 1);
}

void rb(t_stack *stack)
{
    ra(0, stack);
    rb(0, stack);
    ft_putstr_fd("rr\n", 1);
}