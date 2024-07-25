/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:43:54 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/04 14:03:19 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static void	*ft_reverse_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest || !src)
		return (0);
	d = dest + n - 1;
	s = src + n -1;
	while (n > 0)
	{
		*d = *s;
		n--;
		d--;
		s--;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src)
		return (NULL);
	return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		ft_reverse_memcpy(dest, src, n);
	return (dest);
}
