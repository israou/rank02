#include <libc.h>
#include "flood_fill.h"

void	fill(char **tab,t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.x < 0 || cur.y >= size.y || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
		return ;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
// -----------------------------=======-------------

int main(int ac, char **av)
{
	int i;
	int number;

	if (ac == 2)
	{
		i = 1;
		number = atoi(av[1]);
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
				i = 0;
			}
		}
	}
	printf("\n");
}
//---------------------------========---------------

char	*ft_itoa(int nbr)
{
	char *str;
	int len = 0;
	int nbr_cpy;

	if (nbr == -2147483648)
		return("-2147483648\0");
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

//---------------==--======-=====-=========---------
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *head = begin_list;
	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
}

//--------------------------=========------------------------

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *head = *begin_list;
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	if (cmp(head->data, data_ref))
	{
		*begin_list = head->next;
		free(head);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	head = *begin_list;
	ft_list_remove_if(&head->next, data_ref, cmp);
}

//=======-----------------------------------====================

void	sort_in_tab(int *tab, unsigned int size)
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
			i = 0;//ne pas oublier
		}
		else
			i++;
	}
}

//==================-----------------------------=======================

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *head;
	int tmp;

	head = lst;
	while (lst)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return (lst);
}

//===============----------------================================

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;

	while (str[i])
	{
		while (str[i] & (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	char **ptr = (char *)malloc((sizeof(char *) * (wc + 1)));
	i = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		i = j;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if(i > j)
		{
			ptr[k] = (char *)malloc(sizeof(char *) * ((i - j) + 1));
			ft_strncpy(ptr[k++], &str[j], i - j);
		}
	}
	ptr[k] = NULL;
	return (ptr);
}