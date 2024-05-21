/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:30:19 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/09 17:43:38 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	atoi_demo(const char *str)
{
	int res = 0;
	while (*str)
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return (res);
}

void	print_hex(int nb)
{
	if (nb >= 16)
		print_hex(nb / 16);
	write(1, &"0123456789abcdef"[nb % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(atoi_demo(av[1]));
	write(1, "\n", 1);
}