#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex_ptr(unsigned long ptr)
{
	char	*base;
	int	count;

	base = "0123456789abcdef";
	count = 0;
	if (ptr >= 16)
		count += ft_puthex_ptr(ptr / 16);
	count += ft_putchar(base[ptr % 16]);
	return (count);
}

int	ft_putptr(unsigned long ptr)
{
	int	count;
	
	count = 0;
	count += ft_putstr("0x");
	if (ptr == 0)
		count += ft_putchar('0');
	else
		count += ft_puthex_ptr(ptr);
	return (count);
}
