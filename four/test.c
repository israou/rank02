/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:07:33 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/14 00:40:19 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_itoa(int nbr)
{
	int len = 0;
	char *str;
	int nbr_cpy = nbr;

	if (nbr == -2147483648)
		return ("-2147483648\n");
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
}

char *ft_itoa(int nbr)
{
	int len = 0;
	char *str;
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

char	*ft_itoa(int nbr)
{
	int len = 0;
	char *str;
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
	str = ((char *)malloc(len + 1));
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

char	*ft_itoa(int nbr)
{
	int len = 0;
	char *str;
	int nbr_cpy;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr == 0)
		len++;
	while (nbr_cpy)
	{
		nbr_cpy /= 10;
		len++;
	}
	str = ((char *)malloc(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr <= 0)
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