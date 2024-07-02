#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);

	if (ptr)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
