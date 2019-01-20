#include <unistd.h>

void ft_putchar(char c);
void ft_print_comb2(void);
void ft_print_num_as_char(int i, int j);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_num_as_char(int i, int j)
{
	char a;
	char b;

	a = (char) (i / 10) + '0';
	b = (char) (i % 10) + '0';
	
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	
	a = (char) (j / 10) + '0';
	b = (char) (j % 10) + '0';
	
	ft_putchar(a);
	ft_putchar(b);
	
	if (!(i == 98 && j== 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	int arr[2];
	
	arr[0] = 0;
	arr[1] = 1;

	while (arr[0] <= 98)
	{
		while (arr[1] <= 99)
		{
			ft_print_num_as_char(arr[0], arr[1]);
			arr[1]++;
		}
		arr[0]++;
		arr[1] = arr[0] + 1;
	}
}
