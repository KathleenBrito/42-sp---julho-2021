#include	<unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	abc;

	abc = 'a';
	while (abc <= 'z')
	{
		write(1, &abc, 1);
		abc++;
	}
}
