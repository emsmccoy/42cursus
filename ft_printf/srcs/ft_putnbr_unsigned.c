#include <unistd.h>

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;
	char	c;

	count = 0;
	if (n >= 10)
	{
		count = ft_putnbr_unsigned(n / 10);
		count = ft_putnbr_unsigned(n % 10);
	}
	else
	{
		c = n + '0';
		count += write(1, &c, 1);
	}
	return (count);
}
