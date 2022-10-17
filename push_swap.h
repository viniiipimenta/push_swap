/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:24:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/10/17 15:49:30 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct stack_a
{
    int num;
    stack_a* next;
    stack_a* current;
} stack_a;

typedef struct stack_b
{
    int num;
    stack_b* next;
    stack_b* current;
} stack_b;

void    check_num(char *num);
void    ft_stack(char *convert, int len);
void    sa(void);
void    sb(void);
void    ss(void);
void    pa(void);
void    pb(void);

#endif