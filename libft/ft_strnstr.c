/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:47:34 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/04 16:08:18 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen((char *)needle);
	if (needle_len > len)
		return (NULL);
	while (haystack[i] && i <= (int)(len - needle_len))
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
