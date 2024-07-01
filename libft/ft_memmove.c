#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if (d == s)
		return (dest);
	if (s < d && d < s + n)
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
	}
	else
	{
		while (n)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	return (dest);
}
