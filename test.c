#include <libc.h>

// int	atoi_demo(char *str)
// {
// 	int res = 0;
// 	while (*str)
// 	{
// 		res = res * 10 + *str++ - '0';
// 	}
// 	return (res);
// }

// void	put_nbr(int nb)
// {
// 	if (nb >= 10)
// 		put_nbr(nb / 10);
// 	char digit = (nb % 10) + '0';
// 	write(1, &digit, 1);
// }

// int prime(int num)
// {
// 	int i = 2;

// 	if (num <= 1)
// 		return (0);
// 	while (i * i <= num)
// 	{
// 		if (num % i == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int nbr = atoi_demo(av[1]);
// 		int sum = 0;
// 		while (nbr > 0)
// 		{
// 			if (prime(nbr))
// 				sum += nbr;
// 			nbr--;
// 		}
// 		put_nbr(sum);
// 	}
// 	write(1, "\n", 1);
// }

// int	*ft_range(int start, int end)
// {
// 	int *arr;
// 	int *tmp;
// 	int res;

// 	res = start - end;
// 	if (res < 0)
// 		res *= -1;
// 	arr = malloc((res + 1) * sizeof(int));
// 	if (!arr)
// 		return (NULL);
// 	tmp = arr;
// 	while (start != end)
// 	{
// 		if (start > end)
// 		{
// 			*arr = start;
// 			start--;
// 			arr++;
// 		}
// 		else
// 		{
// 			*arr = start;
// 			start++;
// 			arr++;
// 		}
// 	}
// 	*arr = start;
// 	return (tmp);
// }

// int 	*ft_rrange(int start, int end)
// {
// 	int *arr;
// 	int *tmp;
// 	int res;

// 	res - start - end;
// 	if (res < 0)
// 		res *= -1;
// 	arr = malloc((res + 1) * sizeof(int));
// 	if (!arr)
// 		return (NULL);
// 	tmp = arr;
// 	while (start != end)
// 	{
// 		if (end > start)
// 		{
// 			*arr = end;
// 			end--;
// 			arr++;
// 		}
// 		else
// 		{
// 			*arr = end;
// 			end++;
// 			arr++;
// 		}
// 	}
// 	*arr = end;
// 	return (tmp);
// }

// int main(int ac, char **av)
// {
// 	int i = 0;
// 	int j = 0;

// 	if (ac == 3)
// 	{
// 		while (av[1][i] && av[2][j])
// 		{
// 			if (av[1][i] == av[2][j])
// 				i++;
// 			j++;
// 		}
// 		if (av[1][i] == '\0')
// 			write(1, "1", 1);
// 		else
// 			write(1, "0", 1);
// 	}
// 	write(1, "\n", 1);
// }

// unsigned int	lcm(unsigned int a, unsigned int b)
// {
// 	unsigned int n;

// 	if (a == 0 || b == 0)
// 		return (0);
// 	if (a > b)
// 		n = a;
// 	else
// 		n = b;
// 	while (1)
// 	{
// 		if (n % a == 0 && n % b == 0)
// 			return (n);
// 		++n;
// 	}
// }

// void	put_nbr(int nb)
// {
// 	if (nb >= 10)
// 		put_nbr(nb / 10);
// 	char digit = (nb % 10) + '0';
// 	write(1, &digit, 1);
// }

// int main(int ac, char **av)
// {
// 	(void)av;
// 	put_nbr(ac - 1);
// 	write(1, "\n", 1);
// }

// int main(int ac, char **av)
// {
// 	int nbr1;
// 	int nbr2;

// 	if (ac == 3)
// 	{
// 		if ((nbr1 = atoi(av[1])) > 0 && (nbr2 = atoi(av[2])) > 0)
// 		{
// 			while (nbr1 != nbr2)
// 			{
// 				if (nbr1 > nbr2)
// 					nbr1 -= nbr2;
// 				else
// 					nbr2 -= nbr1;
// 			}
// 			print("%d", nbr1);
// 		}
// 	}
// 	printf("\n");
// }

// void	pint_hexa(int nbr)
// {
// 	if (nbr >= 16)
// 		print_hexa(nbr / 16);
// 	write(1, &"0123456789abcdef"[nbr % 16], 1);
// }

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 		print_hexa(atoi(av[1]));
// 	write(1, "\n", 1);
// }



// void	str_capitalizer(char *str)
// {
// 	int i = 0;

// 	if (str[i] >= 'a' && str[i] <= 'z')
// 		str[i] -= 32;
// 	write(1, &str[i], 1);
// 	while (str[++i])
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 			str[i] += 32;
// 		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || str[i - 1] == '\t'))
// 			str[i] -= 32;
// 		write(1, &str[i], 1);
// 	}
// }

// int main(int ac, char **av)
// {
// 	if (ac < 2)
// 		write(1, "\n", 1);
// 	else
// 	{
// 		int i = 1;
// 		while (i < ac)
// 		{
// 			str_capitalizer(av[i]);
// 			write(1, "\n", 1);
// 			i += 1;;
// 		}
// 	}
// 	return (0);
// }

// void	put_nbr(int nb)
// {
// 	if (nb >= 10)
// 		put_nbr(nb / 10);
// 	char digit = (nb % 10) + '0';
// 	write(1, &digit, 1);
// }

// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 		write(1, "\n", 1);
// 	else
// 	{
// 		int i = 1;
// 		int nbr = atoi(av[1]);
// 		while (i <= 9)
// 		{
// 			put_nbr(i);
// 			write(1, " x ", 3);
// 			put_nbr(nbr);
// 			write(1, " = ", 3);
// 			put_nbr(i * nbr);
// 			write(1, "\n", 1);
// 			i += 1;
// 		}
// 	}
// }



int main(int ac, char **av)
{
	int i = 1;
	int number = atoi(av[1]);
	if (ac == 2)
	{
		if (number == 1)
			printf("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break;
				printf("*");
				number /= i;
				i = 1;
			}
		}
	}
	printf("\n");
}

int atoi_demo(char *str)
{
	int res;
	while (*str)
	{
		res = res * 10 + *str++ - '0';
	}
	return (res);
}
void put_nbr(int nb)
{
	if (nb >= 10)
		put_nbr(nb / 10);
	char digit = (nb % 10) + '0';
	write(1, &digit, 1);
}

int is_prime(int number)
{
	int i = 2;

	if (number <= 1)
		return (1);
	while (i * i <= number)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac,char **av)
{
	int nbr;
	int sum;
	if (ac == 2)
	{
		nbr = atoi(av[1]);
		sum = 0;
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	write(1, "\n", 1);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int len = 0;
	int nbr_cpy = nbr;

	if (nbr == -21447483648)
		return ("-2147483648\0");
	if (nbr <= 0)
		len++;
	while (nbr_cpy)
	{
		nbr_cpy /= 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	len--;
	while (nbr)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}

 typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;


void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.x < 0 || cur.y >= size.y || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
		return ;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *head = begin_list;

	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return (NULL);

	t_list *head = *begin_list;
	if (cmp(head->data, data_ref)  == 0)
	{
		*begin_list = head->next;
		free(head);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		head = *begin_list;
		ft_list_remove_if(&head->next, data_ref, cmp);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *head;

	head = lst;
	while (lst)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return (lst);
}


void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int swap;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int ext = 0;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			if (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			{
				i--;
				write(1, &av[1][i], 1);
			}
			while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
			{
				i--;
				ext = i + 1;
			}
			while (av[1][ext] && av[1][ext] != ' ' && av[1][ext] != '\t')
				write(1, &av[1][ext++], 1);
		}
	}
	write(1, "\n", 1);

}
char	*ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return(s1);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}




















