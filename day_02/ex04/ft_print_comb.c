#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	while (++i <= '7')
	{
		j = i;
		while (++j <= '9')
		{
			k = j;
			while (++k <= '9')
			{	
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
