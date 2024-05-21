/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:25:08 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/09 17:27:53 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int		*ft_rrange(int start, int end)
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
		if (start < end)
		{
			*arr = end;
			end--;
			arr++;
		}
		else
		{
			*arr = end;
			end++;
			arr++;
		}
	}
	*arr = end;
	return (tmp);
}