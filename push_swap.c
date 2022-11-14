/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:04:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/11/14 14:17:19 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    int     i;

    i = 1;
    if (argc == 1)
        return 0;
    while(argv[i])
    {
        check_num(argv[i]);
        i++;
    }
    ft_stack(argv, argc);
    check_limit();
    return (0);
}