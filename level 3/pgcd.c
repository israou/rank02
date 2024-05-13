/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:35:43 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/09 20:55:24 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>


int main(int ac, char **av)
{
	int nbr1;
	int nbr2;

	if (ac == 3)
	{
		if ((nbr1 = atoi(av[1])) > 0 && (nbr2 = atoi(av[2])) > 0)
		{
			while (nbr1 != nbr2) //l'algorithme d'Euclide pour calculer le PGCD.
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}

//nbr1 = 42, nbr2 = 10.
// nbr1 = 42 - 10 = 32, nbr2 = 10.
// nbr1 = 32 - 10 = 22, nbr2 = 10.
// nbr1 = 22 - 10 = 12, nbr2 = 10.
// nbr1 = 12 - 10 = 2, nbr2 = 10.
// nbr1 = 2 - 10 = -8, nbr2 = 10.
// nbr1 = 10, nbr2 = 10.
// nbr1 = 10 - 10 = 0, nbr2 = 10.
// nbr1 = 10, nbr2 = 0.
// La boucle s'arrête car nbr1 et nbr2 sont égaux à 10.
// Le PGCD (42 et 10) est 10, donc 10 est affiché.
// Le programme affiche une nouvelle ligne et se termine.