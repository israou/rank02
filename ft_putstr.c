#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;

	if (!str)
		return ; //se termine immediatement retour anticipé
	while (str[i])
		write (1, &str[i++], 1);
}