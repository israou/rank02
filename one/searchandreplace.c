/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:33:40 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/02 18:37:34 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 4)
	{
		if (av[2][1] != '\0' || av[3][1] != '\0')
			exit(write(1, "\n", 1));
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}