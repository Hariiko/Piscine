#include <unistd.h>
#include <stdlib.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			c = (a / 10) + '0';
			write(1, &c, 1);
			c = (a % 10) + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = (b / 10) + '0';
			write(1, &c, 1);
			c = (b % 10) + '0';
			write(1, &c, 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
		}
	}
}

/*int main (void)
{
    ft_print_comb2();
}*/