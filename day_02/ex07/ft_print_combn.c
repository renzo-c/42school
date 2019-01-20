#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(char arr[], int n);
void	ft_initialize(char arr[], int n, int flag);
void	ft_print_combn(int n);
void	ft_increment_units(char arr[], int n);
void	ft_check_is_max(char arr[], char arr_end[], int index, int n);


int	main(void)
{
	ft_print_combn(3);
	return (0);
}

void	ft_print_combn(int n)
{
	char arr[n];
	char arr_end[n];
	int index;

	ft_initialize(arr, n, 0);
	ft_initialize(arr_end, n, 1);

	index = n - 1;
	while (arr[0] < 10 - n + '0')
	{
		ft_increment_units(arr, n);
		if (n > 1)
			ft_check_is_max(arr, arr_end, index, n);
	}
	if (n > 1)
		ft_putnbr(arr, n);
}

void	ft_check_is_max(char arr[], char arr_end[], int index, int n)
{
	int i;

	i = index;
	if (arr[i - 1] < arr_end[i - 1])
	{
		arr[i - 1]++;
		while(i <= n)
		{
			arr[i] = arr[i - 1] + 1;
			i++;
		}
	}
	else
		ft_check_is_max(arr, arr_end, i - 1, n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(char arr[], int n)
{
	int count;

	count = 0;
	while(count < n)
		ft_putchar(arr[count++]);
	if(arr[0] != 10 - n + '0')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_initialize(char arr[], int n, int flag)
{
	int count;
	int digit;

	count = 0;
	if (flag == 0)
		digit = 0;
	else if (flag == 1)
		digit = 10 - n;	
	while (count < n)
		arr[count++] = digit++ + '0';
}

void	ft_increment_units(char arr[], int n)
{

	while  (arr[n - 1] <= '9')
	{
		ft_putnbr(arr, n);
		arr[n - 1]++;
	}
}

void	ft_test(char arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%c", arr[i]);
	printf("\n");
}
