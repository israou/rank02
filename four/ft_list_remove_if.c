/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:08:56 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/15 19:35:54 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *head = *begin_list;

	if (begin_list == NULL || *begin_list == NULL)
		return (NULL);
	if (cmp(head->data, data_ref))
	{
		*begin_list = head->next;
		free(head);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	head = *begin_list;
	ft_list_remove_if(&head->next, data_ref, cmp);
}
