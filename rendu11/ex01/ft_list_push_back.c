/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:34:56 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 12:14:41 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *buf;

	new_elem = ft_create_elem(data);
	buf = *begin_list;
	if (buf != NULL)
	{
		while (buf->next)
			buf = buf->next;
		buf->next = new_elem;
	}
	else
		*begin_list = new_elem;
}
