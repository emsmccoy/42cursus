#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	size_t	needle_len;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	while(haystack[i] && i <= len - needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
