#include "ft_putchar.c"

void	rush(int x, int y);
void	ft_putchar(char c);
void	ft_print_line(char start, char end, char middle, int x);

void	rush(int x, int y)
{
	int num;

	num = 0;
	if (y == 1 && x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{
		while (num < y)
		{
			if (num == 0)
				ft_print_line('A', 'C', 'B', x);
			else if (num == y - 1)
				ft_print_line('C', 'A', 'B', x);
			else
				ft_print_line('B', 'B', ' ', x);
			num++;
		}
	}
}

void	ft_print_line(char start, char end, char middle, int x)
{
	int i;

	i = 1;
	ft_putchar(start);
	while(i++ < x - 1)
		ft_putchar(middle);
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}
