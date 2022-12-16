/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:24:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/16 09:52:55 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"

typedef struct stack
{
	int	*num_a;
	int	*num_b;
	int	len_a;
	int	len_b;
}	t_stack;

void	check_num(char *num);
void	check_limit(long len);
void	ft_stack(char **value, t_stack *stack);
void	check_repeat(int len, t_stack *stack);
int		check_sort(t_stack *stack, int len);
void	sort_to_index(t_stack *stack);
void	sorting(t_stack *stack);

void	sa(int print, t_stack *stack);
void	sb(int print, t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(int print, t_stack *stack);
void	rb(int print, t_stack *stack);
void	rr(t_stack *stack);
void	rra(int print, t_stack *stack);
void	rrb(int print, t_stack *stack);
void	rrr(t_stack *stack);
#endif
