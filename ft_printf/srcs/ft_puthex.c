#include <unistd.h>
#include "ft_printf.h"


int	ft_puthex_rec(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthex_rec(n / 16, base);
		count += ft_puthex_rec(n % 16, base);
	}
	else
	{
		count += ft_putchar(base[n]);
	}
	return (count);
}

int	ft_puthex_lower(unsigned int n)
{
	char	*base;
	base = "0123456789abcdef";
	return ft_puthex_rec(n, base);
}

int	ft_puthex_upper(unsigned int n)
{
	char	*base;
	base = "0123456789ABCDEF";
	return ft_puthex_rec(n, base);
}
