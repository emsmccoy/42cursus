/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:48:37 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/04 16:12:46 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	if (!str)
		return (NULL);
	len = ft_strlen((char *)str);
	new_str = (char *)malloc((len + 1) * sizeof (char));
	if (new_str)
	{
		ft_memcpy(new_str, str, len);
		new_str[len] = '\0';
	}
	return (new_str);
}
