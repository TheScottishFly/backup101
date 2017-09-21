/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:15:16 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 10:59:50 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *buf;
	t_list *prev;

	buf = NULL;
	if (begin_list != NULL)
	{
		buf = *begin_list;
		while (buf != NULL && (*cmp)(buf->data, data_ref) == 0)
		{
			*begin_list = buf->next;
			free(buf);
			buf = *begin_list;
		}
	}
	while (buf != NULL)
	{
		while (buf != NULL && (*cmp)(buf->data, data_ref) != 0)
		{
			prev = buf;
			buf = buf->next;
		}
		if (buf != NULL)
		{
			prev->next = buf->next;
			free(buf);
			buf = prev->next;
		}
	}
}
