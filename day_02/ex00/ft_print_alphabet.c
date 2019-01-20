#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(0, &c, 1);
}

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
		ft_putchar(letter++);
}
