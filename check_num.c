/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:20 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/12 11:41:18 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void check_num(char *num)
{
    int i;
    int check;

    i = 1;
    check = 1;
    while (num[i])
    {
        check = ft_isdigit(&num[i]);
        if (check == 0)
        {
            ft_putstr_fd("Wrong input, input just numbers.", 1);
            exit(0);
        }
        i++;
    }
}