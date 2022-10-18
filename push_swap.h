/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:24:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/18 13:11:33 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct stack
{
    int *num_a;
    int *num_b;
    int len_a;
    int len_b;
} stack;

void    check_num(char *num);
void    ft_stack(char **value, int argc);
void    sa(void);
void    sb(void);
void    ss(void);
void    pa(void);
void    pb(void);

#endif