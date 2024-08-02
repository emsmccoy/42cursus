/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:59:43 by emmalons          #+#    #+#             */
/*   Updated: 2024/07/04 16:15:26 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t  ft_substr_count(char const *s, char c)
{
  int  in_substr;
  int  count;
  
  in_substr = 0;
  count = 0;
  while (*s)
    {
      if (*s != c && !in_substr)
      {
        in_substr = 1;
        count++;
      }
      else if (*s == c)
        in_substr = 0;
      s++;
    }
  return (count);
}

char	**ft_split(char const *s, char c)
{
  char	**lst;
  size_t	word_len;
  int		i;

  lst = (char **)malloc((ft_substr_count(s, c) + 1) * sizeof(char *));
  if (!s || !lst)
    return (0);
  i = 0;
  while (*s)
  {
    while (*s == c && *s)
      s++;
    if (*s)
    {
      if (!ft_strchr(s, c))
        word_len = ft_strlen(s);
      else
        word_len = ft_strchr(s, c) - s;
      lst[i++] = ft_substr(s, 0, word_len);
      s += word_len;
    }
  }
  lst[i] = NULL;
  return (lst);
}