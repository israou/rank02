/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:54:26 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/20 00:44:57 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	ft_atoi_base(const char *str, int base)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		res = res * base;
		if (str[i] >= '0' && str[i] <= '9')
			res = res + str[i] - '0';
		else if (str[i] >= 'A' && str[i] < 'A' + (base - 10))
			res = res + str[i] - '7';
		else if (str[i] >= 'a' && str[i] < 'a' + (base - 10))
			res = res + str[i] - 'W';
		else
		{
			res = res / base;
			break;
		}
		i++;
	}
	return (res * sign);
}

int main()
{
	char str[] = "abczdef";
	printf("%d\n", ft_atoi_base(str, 16));
}














