#include <limits.h>
#include <unistd.h>

static	int	ft_putnbr_rec(int n)
{
	int	count;
	char	c;

	count = 0;
	if (n >=10)
	{
		count += ft_putnbr_rec(n / 10);
		count += ft_putnbr_rec(n % 10);
	}
	else
	{
		c = n + '0';
		count += write(1, &c, 1);
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
		return write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			count += write(1, "-", 1);
			n = -n;
		}
		count += ft_putnbr_rec(n);
	}
	return (count);
}
