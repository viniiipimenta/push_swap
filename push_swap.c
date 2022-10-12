/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:04:40 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/12 11:34:43 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc == 0)
        return 0;
    while(argv[i])
    {
        check_num(argv[i]);
        i++;
    }
    return (0);
}