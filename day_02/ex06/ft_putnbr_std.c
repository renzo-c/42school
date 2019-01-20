#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int	ft_getlen(int num);
void	ft_resetarr(char arr[]);
void	ft_int_to_char(int nb, char arr[]);
void	ft_printarr(char arr[]);
/*
int	main(void)
{
	ft_putnbr(-32768);
	ft_putnbr(32767);
	ft_putnbr(345);
	ft_putnbr(-32);
	ft_putnbr(8);
	ft_putnbr(0);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_getlen(int num)
{
	int ans;

	ans = 0;
	while (num / 10 > 0)
	{
		num /= 10;
		ans ++;
	}
	return (ans);
}

void	ft_resetarr(char arr[])
{
	int i;

	i = 0;
	while ( i <= 10)
		arr[i++] = '\0';
}

void	ft_printarr(char arr[])
{
	int i;

	i = 0;
	while (arr[i] != '\0')
	{
		ft_putchar(arr[i++]);
	}
}

void	ft_int_to_char(int nb, char arr[])
{
	int dig;
	int size;

	size = ft_getlen(nb);
	while (nb / 10 > 0)
	{
		dig = nb % 10;
		nb = nb / 10;
		arr[size--] = dig + '0';
	}
	arr[0] = nb + '0';
}

void	ft_putnbr(int nb)
{
	char str[11];
	int sign;
	static char min[11] = "-2147483648";
 
	sign = 1;
	if (nb == -2147483648)
		ft_printarr(min);
	else
	{
		if (nb < 0)
		{
			sign = -1;
			ft_putchar('-');
		}
		nb *= sign;
		ft_int_to_char(nb, str);
		ft_printarr(str);
	}
	ft_resetarr(str);
}
