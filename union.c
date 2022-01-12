#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		checkforward(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int		checkbackward(char *str, char c, int i)
{
	while (i >= 0)
	{
		if (str[i] == c)
			return 0;
		i--;
	}
	return 1;
}

void	ft_union(char *str1, char *str2)
{
	int i = 0;
	while (str1[i])
	{
		if (checkbackward(str1, str1[i], i - 1))
			ft_putchar(str1[i]);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if(checkbackward(str2, str2[i], i - 1) == 1 && checkforward(str1, str2[i]) == 1)
			ft_putchar(str2[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 3)
		ft_union(av[1], av[2]);


	ft_putchar('\n');
	return 0;
}