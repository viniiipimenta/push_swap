/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:14:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/19 15:28:02 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	if ((c >= 48 && c <= 57) || c == '-' || c == '+')
	{
		return (1);
	}
	return (0);
}
