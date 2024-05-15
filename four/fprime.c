/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:34:28 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/15 16:16:48 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

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
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}

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
				i += 1;
			}
		}
	}
	pritf("\n");
}

int main(int ac, char **av)
{
	int i;
	int number;

	if (ac == 2)
	{
		if (number == 1)
			printf("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				printf("%d", 1);
				if (number == i)
					break;
				printf("*");
				number /= i;
				i += 1;
			}
		}
	}
	printf("\n");
}

int main(int ac, char **av)
{
	int i;
	int number;

	if ( ac == 2)
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
				i += 1;
			}
		}
	}
	printf("\n");
}

int main(int ac, char **av)
{
	int i;
	int number;

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
				number /= i;
				i += 1;
			}
		}
	}
	printf("\n");
}

int main(int ac, char **av)
{
	int i;
	int nbr;

	if (ac == 2)
	{
		i = 1;
		nbr = atoi(av[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= ++i)
		{
			if(nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				nbr /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int len = 0;
	int nbr_cpy;

	if (nbr == -2147483648)
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
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *head = *begin_list;

	if (begin_list == NULL || *begin_list == NULL)
		return (NULL);
	if (cmp(head->data, data_ref))
	{
		*begin_list = head->next;
		free(head);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	head = *begin_list;
	ft_list_remove_if(&head->next, data_ref, cmp);
}

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list *head = begin_list;
	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
}