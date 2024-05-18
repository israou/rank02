/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:10:45 by ichaabi           #+#    #+#             */
/*   Updated: 2024/05/16 18:11:31 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_LIST_SIZE_H

#define FT_LIST_SIZE_H

#include <libc.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif