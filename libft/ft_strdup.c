#include <stddef.h>
#include "libft.h"

char *ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;
	
	if (!str)
		return NULL;
	len = ft_strlen(str);
	new_str = (char	*)malloc((len + 1) * sizeof(char));
	if (new_str)
	{
		ft_memcpy(new_str, str, len);
		new_str[len] = '\0';
	}
	return (new_str);
}