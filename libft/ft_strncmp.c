/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:46:35 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/04 13:46:41 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
	{
		while (*s1 == *s2 && *s1 && *s2 && n > 1)
		{
			s1++;
			s2++;
			n--;
		}
		return (*s1 - *s2);
	}
	else
		return (0);
}
