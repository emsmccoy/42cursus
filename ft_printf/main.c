#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	ft_printf("Hello, World!\n");
	ft_printf("Character: %c\n", 'L');
	ft_printf("String: %s\n", "String test");
	ft_printf("Percent: %%\n");
	ft_printf("Integer: %d\n", 42);
	ft_printf("Negative integer: %d\n", -42);
	//ft_printf("Unsigned integer: %u\n", 42);
	//ft_printf("Hexadecimal (lowercase): %x\n", 255);
	//ft_printf("Hexadecimal (uppercase: %X\n)", 255);
	return (0);
}
