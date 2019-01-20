#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_int_to_char(int nb);
void	ft_putnbr(int nb);
void	ft_putstr(char arr[]);

int	main(void)
{
	ft_putnbr(-32768);
	ft_putnbr(0);
	ft_putnbr(32767);
	ft_putnbr(32768);
	ft_putnbr(-32769);
	ft_putchar('\n');
	printf("%d", INT_MAX);
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_to_char(int nb)
{
	if (nb >= 10)
		ft_int_to_char(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void ft_putstr(char arr[])
{
	int i;

	i = 0;
	while (arr[i] != '\0')
		ft_putchar(arr[i++]);
}

void	ft_putnbr(int nb)
{
//	if (nb >= -2147483648 && nb <= 2147483647)
//	{
		if (nb == -2147483648)
			ft_putstr("-2147483648");
		else
		{
			if (nb < 0)
			{
				ft_putchar('-');	
				nb *= -1;
			}
			ft_int_to_char(nb);
		}	
//	}
}
