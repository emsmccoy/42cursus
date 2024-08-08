#ifndef	FT_PRINTF_H
#define	FT_PRINTF_H

#include <stdarg.h>
#include "libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthex_lower(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_putptr(unsigned long ptr);

#endif
