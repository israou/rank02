/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:06:52 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/10 20:21:39 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int	j;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
//cette fonction parcourt la chaîne s caractère par caractère
//et vérifie si chaque caractère est présent dans la chaîne accept.
//Dès qu'elle trouve un caractère de accept dans s, elle renvoie la position de ce caractère dans s.
// Si aucun caractère de accept n'est trouvé dans s, la fonction renvoie la longueur de la chaîne s.