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
	char edge;
	char middle;

	i = 1;
	edge = 'B';
	middle = ' ';
	if (line == 0)
	{
		edge = 'A';
		middle = 'B';
	}
	else if (line == y - 1)
	{
		edge = 'C';
		middle = 'B';
	}
	ft_putchar(edge);
	while(i++ < x - 1)
		 	ft_putchar(middle);
	if (x > 1)
		ft_putchar(edge);
	ft_putchar('\n');
}
