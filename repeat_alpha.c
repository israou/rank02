#include <unistd.h>
int main(int ac, char **av)
{
	int i;
	int new;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				new = av[1][i] - 64;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				new = av[1][i] - 96;
			while (new) //ecrit la lettre en fonction de la valeur de new
			{
				write(1, &av[1][i], 1);
				new--;
			}
			new = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
