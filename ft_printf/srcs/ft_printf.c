#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == 'c' || format[i + 1] == 's'))
		{
			i++;
			if (format[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				count += ft_putstr(va_arg(args, char *));
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
