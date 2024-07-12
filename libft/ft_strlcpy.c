/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:44:57 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/04 15:56:02 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	srcsize;
	int		i;

	s = (char *)src;
	srcsize = ft_strlen(s);
	i = 0;
	if (!dstsize)
		return (srcsize);
	while (i < ((int)dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (srcsize);
}
