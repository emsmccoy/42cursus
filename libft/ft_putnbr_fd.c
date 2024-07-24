/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:08:43 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/23 19:45:26 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_putnbr_fd(int n, int fd)
{
   char *s = ft_itoa(n);
   if (s)
      ft_putstr_fd(s, fd);
   else
      return;
}