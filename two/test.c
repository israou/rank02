//_____________lastword
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	while (av[1][i])
		i++;
	while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
		i--;
	while (i >= 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
		i--;
	i++;
	while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
//_____________inter
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int list[127] = {0};

	while (av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if (av[1][i] == av[2][j] && list[av[2][j] == 0])
			{
				write(1, &av[1][i], 1);
				list[av[2][j]] = 1;
			}
			j++;
		}
		i++;
	}
}

//________________________________alpha mirror
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
				av[1][i] = 90 - av[1][i] + 65;
			else if (av[1][i] >= 97 && av[1][i] <= 122)
				av[1][i] = 122 - av[1][i] + 97;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

//____________camel_to_snake
#include <libc.h>

int main(int ac, char **av)
{
	int i =  0;

	while (av[1][i])
	{
		if (av[1][i] >= 65 && av[1][i] <= 90)
		{
			write(1, "_", 1);
			av[1][i] += 32;
		}
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
//_________________do_op
#include <libc.h>

int main(int ac, char **av)
{
	if (av[2][0] == '-')
		printf("%d\n", (atoi(av[1]) - atoi(av[3])));
	if (av[2][0] == '+')
		printf("%d\n", (atoi(av[1]) + atoi(av[3])));
	if (av[2][0] == '*')
		printf("%d\n", (atoi(av[1]) * atoi(av[3])));
	if (av[2][0] == '/')
		printf("%d\n", (atoi(av[1]) / atoi(av[3])));
	if (av[2][0] == '%')
		printf("%d\n", (atoi(av[1]) % atoi(av[3])));
}

//____________________strdup
#include <libc.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *p;

	while(src[i])
		i++;
	p = malloc(i + 1);
	if (!p)
		return (NULL);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p = '\0';
	return (p);
}
//___________________strrev
char	*ft_strrev(char *str)
{
	int i = -1;
	int length = 0;
	int tmp;

	while (str[length])
		length++;
	while (++i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = tmp;
	}
	return (str);
}
//_________atoi
int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (sign * number);
}

//____________________snake to camel
#include <libc.h>

int main(int ac, char **av)
{
	int i = 0;

}

