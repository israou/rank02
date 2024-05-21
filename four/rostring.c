#include <libc.h>

int main(int ac, char **av)
{
	int i = 0;
	int k = 0;
	char *s;

	if (ac >= 2)
	{
		s = av[1];
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;

		while (av[1][i])
		{
			k = 1;
			if (av[1][i] == ' ')
			{
				while (av[1][i] == ' ')
					i++;
				if (av[1][i] == '\0')
				{
					break;
				}
				write(1, " ", 1);
			}
			write(1, &av[1][i], 1);
			i++;
		}

		i = 0;
		if (k == 1)
			write(1, " ", 1);
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}