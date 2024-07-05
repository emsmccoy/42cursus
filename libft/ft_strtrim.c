#include <stddef.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	char	*trimmed_str;
	int	i;
	int	count;

	if (!s1)
		return NULL;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	trimmed_str = (char *)s1;
	i = 0;
	count = 0;
	while (s1[i])
		while (ft_memchr(s1[i], set[i], s1_len))
			count++;
			i++;
		i++;



	
}
