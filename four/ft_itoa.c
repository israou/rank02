/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:58:26 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/18 22:22:28 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_itoa(int nbr)
{
	int len = 0;
	char *str;
	int nbr_cp = nbr;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr <= 0)
		len++;
	while (nbr_cp)
	{
		nbr_cp /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char *) * (len + 1));
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

int main()
{
	int nbr = 233445;
	printf("%s\n", ft_itoa(nbr));
}