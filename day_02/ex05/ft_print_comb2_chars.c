#include <unistd.h>

void ft_putchar(char c);
void ft_print_num(char i, char j, char k, char l);
void ft_print_comb2(void);
void ft_increment_units(char i, char j, char k);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_num(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	
	if (!(i == '9' && j == '8'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_increment_units(char i, char j, char k)
{
	int l;
	
	if ( i == k)
		l = j + 1;
	else
		l = '0';
	while (l <= '9')
		ft_print_num(i, j, k, l++);	
}

void ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	i = '0';
	j = '0';
	while (i <= '9')
	{
		k = i;
		while (k <= '9')
		{
			ft_increment_units(i, j, k);
			k++;
		}
		if (j < '9')
			j++;
		else
		{
			i++;
			j = '0';
		}
	}
}

