/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:18:41 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/03 18:18:57 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *)s1;
			i++;
		}
		s1++;
	}
	return (NULL);
}
//cette fonction parcourt la chaîne s1 caractère par caractère et vérifie si chaque caractère est présent dans la chaîne s2.
// Dès qu'elle trouve un caractère correspondant, elle renvoie un pointeur vers ce caractère dans s1.
// Si aucun caractère correspondant n'est trouvé, la fonction renvoie 0.
