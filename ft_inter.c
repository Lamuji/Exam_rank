#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkav1(char *str, char c) 
{
	int i = 0;

	while (str[i])
	{
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int	checkav2(char *str, int pos, char c)
{
	int i = 0;
	while (i < pos)
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int ac, char  **av)
{
	int i = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			if (checkav1(av[2], av[1][i]) && checkav2(av[1], i, av[1][i]))
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
