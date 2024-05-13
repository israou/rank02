/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:56:12 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/09 17:22:47 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	*ft_range(int start, int end)
{
	int *arr;
	int *tmp;
	int res;

	res = start - end;
	if (res < 0)
		res *= -1;
	arr = malloc((res + 1) * sizeof(int));
	tmp = arr;
	while (start != end)
	{
		if (start > end)
		{
			*arr = start;
			start--;
			arr++;
		}
		else
		{
			*arr = start;
			start++;
			arr++;
		}
	}
	*arr = start;
	return (tmp);
}

int main()
{
	int *arr = ft_range(0, -3);
	int i = 4;
	while (i)
	{
		printf("%d\n", *arr);
		i--;
		arr++;
	}
}

int		*ft_range(int start, int end)
{
	int *arr;
	int *tmp;
	int res;

	res = start - end;
	if (res < 0)
		res *= -1;
	arr = malloc((res + 1) * sizeof(int));
	tmp = arr;
	while (start != end)
	{
		if (start > end)
		{
			*arr = start;
			start--;
			arr++;
		}
		else
		{
			*arr = start;
			start++;
			arr--;
		}
	}
	*arr = start;
	return (tmp);
}

int *ft_range(int start, int end)
{
	int *arr;
	int *tmp;
	int res;

	res = start - end;
	if (res < 0)
		res *= -1;
	arr = malloc((res + 1) * sizeof(int));
	tmp = arr;
	while (start != end)
	{
		if (start > end)
		{
			*arr = start;
			start--;
			arr++;
		}
		else
		{
			*arr = start;
			start++;
			arr++;
		}
	}
	*arr = start;
	return (tmp);
}

int		ft_atoi_base(const char *str, int base)
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
		else if (str[i] >= 'A' && str[i] < 'a' + (base - 10))
			res = res + str[i] - '7';
		else if (str[i] >= 'a' && str[i] < 'a' + (base - 10))
			res = res + str[i] - 'W';
		else
		{
			res= res / base;
			break;
		}
		i++;
	}
	return (res * sign);
}

int		*ft_range(int start, int end)
{
	int *arr;
	int *tmp;
	int res;

	res = start - end;
	if (res < 0)
		res *= -1;
	arr = malloc((res + 1) * sizeof(int));
	tmp = arr;
	while (start != end)
	{
		if (start > end)
		{
			*arr = start;
			start--;
			arr++;
		}
		else
		{
			*arr = start;
			start++;
			arr++;
		}
	}
	*arr = start;
	return (tmp);
}