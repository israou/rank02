#include <libc.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int tab1[255] = {0};
	int tab2[255] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (tab1[(int)av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				tab1[(int)av[1][i]] = 1;
			}
			i++;
		}
		while (av[2][j])
		{
			if (tab2[(int)av[2][j]] == 0 && tab1[(int)av[2][j]] == 0)
			{
				write(1, &av[2][j], 1);
				tab2[(int)av[2][j]] = 1;
				tab1[(int)av[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return(0);
}