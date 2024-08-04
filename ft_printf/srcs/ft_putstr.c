#include <unistd.h>

int	ft_putstr(char *s)
{
	size_t	len = 0;

	while (s[len])
		len++;
	return write(1, s, len);
}
