#include "ft_putchar.c"

void	rush(int x, int y);
void	ft_print_edges(char arr[], int n);
void	ft_print_laterals(char arr[], int n);
void	ft_putchar(char c);
void	ft_print_arr(char arr[], int n);

void	rush(int x, int y)
{
	int len;
	int num;
	char arr[x];

	len = 0;
	num = 0;
	while (num < y)
	{
		if (num == 0 || num == y - 1)
			ft_print_edges(arr, x);
		else
			ft_print_laterals(arr, x);
		num++;
	}
}

void	ft_print_edges(char arr[], int n)
{
	int i;

	i = 1;
	arr[0] = 'o';
	arr[n - 1] = 'o';
	while (i < n - 1)
		arr[i++] = '-';
	ft_print_arr(arr, n);
}

void	ft_print_laterals(char arr[], int n)
{
	int i;

	i = 1;
	arr[0] = '|';
	arr[n - 1] = '|';
	while( i < n - 1)
		arr[i++] = ' ';
	ft_print_arr(arr, n);
}

void	ft_print_arr(char arr[], int n)
{
	int i;

	i = 0;
	while (i < n)
		ft_putchar(arr[i++]);
	ft_putchar('\n');
}
