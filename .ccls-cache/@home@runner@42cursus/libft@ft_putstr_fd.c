/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:38:43 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/23 18:45:26 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stddef.h>

void ft_putstr_fd(char *s, int fd)
{
ssize_t  result;
   
if (!s)
   return;
 result = write(fd, s, ft_strlen(s));
 if (result == -1)
   return;
}