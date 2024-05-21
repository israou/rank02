/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:18:32 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/21 15:28:41 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *head;

	head = begin_list;
	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
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
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				nbr /= 10;
				i = 1;
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
		i = 1;
		number = atoi(av[1]);
		if (number == 1)
			printf("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{

			}
		}
	}
}