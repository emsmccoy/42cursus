#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char * s;
	size_t srcsize;
	int	i;

	s = src;
	srcsize = ft_strlen(s);
	i = 0;
	if (!dstsize)
		return (srcsize);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (srcsize);
}
