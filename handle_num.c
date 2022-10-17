/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/17 15:50:16 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void    ft_stack(char *convert, int len)
{
    stack_a    a;
    int     i;
    
    i = 1;
    a.next = malloc(sizeof(int) * len);
    a.next->next = NULL;
    a.current = &a;
    while (a.current != NULL && convert[i])
    {
        a.current->num = ft_atoi(convert[i]);
        a.current = a.current->next;
        i++;
    }
}

void check_num(char *num)
{
    int i;

    i = 1;
    while (num[i])
    {
        if (ft_isdigit(num[i]) == 0)
        {
            ft_putstr_fd("Wrong input, input just numbers.", 1);
            exit(0);
        }
        i++;
    }
}