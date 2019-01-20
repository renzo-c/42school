#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char num;

	num = '0';
	while (num <= '9')
		ft_putchar(num++);
}
