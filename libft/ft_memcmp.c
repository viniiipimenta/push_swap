/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:00:24 by mpimenta          #+#    #+#             */
/*   Updated: 2022/05/27 10:07:09 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	i = 0;
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str[i] != str2[i])
			return (str[i] - str2[i]);
		i++;
	}
	return (0);
}
