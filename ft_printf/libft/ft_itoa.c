/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:08:43 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/24 18:11:45 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		sign;
	long	num;

	num = (long)n;
	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	sign = 0;
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		num = num * (-1);
		str[0] = '-';
		sign = 1;
	}
	while ((int)len > sign)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
