/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:36:59 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/15 19:50:06 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main(int ac, char**av)
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
				write(1, &av[1][i], 1);
				i--;
			}
			while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
			{
				i--;
				ext = i + 1;
			}
			while (av[1][ext] && av[1][ext] != ' ' && av[1][ext] != '\t')
			{
				write(1, &av[1][ext], 1);
				ext++;
			}
		}
	}
	write(1, "\n", 1);
}
