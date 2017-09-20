/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:15:16 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/20 11:18:59 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *buf;
	t_list *next;

	buf = *begin_list;
	while (buf->next)
	{
		next = buf->next;
		if ((*cmp)(buf->data, data_ref) == 0)
			free(buf);
		buf = next;
	}
	if ((*cmp)(buf->data, data_ref) == 0)
		free(buf);
}
