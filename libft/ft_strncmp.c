#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
	{
		while (*s1 == *s2 && *s1 && *s2 && n > 1)
		{
			s1++;
			s2++;
			n--;
		}
		return (*s1 - *s2);
	}
	else
		return (0);
}
