/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:54:21 by emmalons          #+#    #+#             */
/*   Updated: 2024/06/20 16:54:44 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}

/*int	main(void)
{
	ft_isdigit('1');
	ft_isdigit('a');
	ft_isdigit('\n');
	ft_isdigit('2');
	return (0);
}*/
