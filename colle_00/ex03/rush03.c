#include "ft_putchar.c"

void	rush(int x, int y);
void	ft_putchar(char c);
void	ft_print_line(int x, int y, int line);

void	rush(int x, int y)
{
	int len;
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
			ft_print_line(x, y, num++);
	}
}

void	ft_print_line(int x, int y, int line)
{
	int i;
	char first;
	char middle;
	char last;

	i = 1;
	first = 'B';
	last = 'B';
	middle = ' ';
	if (line == 0 || line == y - 1)
	{
		first = 'A';
		middle = 'B';
		last = 'C';
	}	
	ft_putchar(first);
	while(i++ < x - 1)
		 	ft_putchar(middle);
	if (x > 1)
		ft_putchar(last);
	ft_putchar('\n');
}
