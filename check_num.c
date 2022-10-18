/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/18 12:29:43 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void check_num(char *num)
{
    int i;

    i = 0;
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