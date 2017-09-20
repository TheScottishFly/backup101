/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 08:54:38 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/20 08:58:04 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *buf;

	buf = begin_list;
	while (buf->next && (*cmp)(buf->data, data_ref) != 0)
	{
		buf = buf->next;
	}
	if ((*cmp)(buf->data, data_ref) != 0)
		buf = 0;
	return (buf);
}
