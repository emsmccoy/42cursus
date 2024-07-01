#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t dst_len;
	int	i;
	int	j;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	if (dstsize == 0 || dst_len == dstsize)
		return (src_len + dst_len);
	i = dst_len;
	j = 0;
	while (src[j] || (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
