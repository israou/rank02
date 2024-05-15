/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:18:08 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/15 17:51:50 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *head;

	head = lst;
	while (lst)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return (lst);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int , int))
{
	int swap;
	t_list *head;

	head = lst;
	while (lst)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return (lst);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *head;

	head = lst;
	while (lst)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return (lst);

}


t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *head = lst;

	while (lst)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
		swap = lst->data;
		lst->data = lst->next->data;
		lst->next->data = swap;
		lst = head;
		}
		else
		lst = lst->next;
	}
	lst = head;
	return (lst);
}

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

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list *head = begin_list;

	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
}