/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:24:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/08 16:29:39 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct stack
{
	int	*num_a;
	int	*num_b;
	int len_a;
	int len_b;
}	t_stack;

void	check_num(char *num);
void	check_limit(long len);
void	ft_stack(char **value, t_stack *stack);
void	check_repeat(int len, t_stack *stack);
int		check_sort(t_stack *stack, int len);
void	sorting(t_stack stack, int len);
void    sa(int print, t_stack *stack);
void    sb(int print, t_stack *stack);
void    ss(t_stack *stack);

#endif
