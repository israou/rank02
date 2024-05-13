/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 22:27:53 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/11 23:07:24 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main(int ac, char **av)
{
	int i = 0;
	int flag = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if ((av[1][i] == ' ' || av[1][i] == '\t' ))
				flag = 1;
			if (av[1][i] != ' ' && av[1][i] != '\t')
			{
				if (flag != 0)
					write(1, " ", 1);
				flag = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

// int main(int ac, char **av)
// {
// 	int i = 0;
// 	int flag = 0;

// 	if (ac == 2)
// 	{
// 		if (av[1][i] == ' ' || av[1][i] == '\t')
// 			i++;
// 		while (av[1][i])
// 		{
// 			if (av[1][i] == ' ' || av[1][i] == '\t')
// 				flag = 1;
// 			if (av[1][i] != ' ' && av[1][i] != '\t')
// 			{
// 				if (flag)
// 					write(1, " ", 1);
// 				flag = 0;
// 				write(1, &av[1][i], 1);
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

// int main (int ac, char **av)
// {
// 	int i = 0;
// 	int flag = 0;

// 	if (ac == 2)
// 	{
// 		if (av[1][i] == ' ' || av[1][i] == '\t')
// 			i++;
// 		while (av[1][i])
// 		{
// 			if (av[1][i] == ' ' || av[1][i] == '\t')
// 				flag = 1;
// 			if (av[1][i] != ' ' && av[1][i] != '\t')
// 			{
// 				if (flag)
// 					write(1, " ", 1);
// 				flag = 0;
// 				write(1, &av[1][i], 1);
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }