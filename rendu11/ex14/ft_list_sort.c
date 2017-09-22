/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 06:43:59 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/22 06:44:02 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_swap(t_list **buf)
{
	t_list	*buff;
	t_list	*temp;

	buff = *buf;
	temp = buff->next->next;
	buff->next->next = buff;
	buff->next = temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*buf;
	t_list	*next;

	buf = *begin_list;
	if (buf == NULL)
		return ;
	while (buf->next)
	{
		if ((*cmp)(buf->data, buf->next->data) > 0)
		{
			if (buf != *begin_list)
				next->next = buf->next;
			else
				*begin_list = buf->next;
			ft_list_swap(&buf);
			buf = *begin_list;
		}
		else
		{
			next = buf;
			if (buf->next)
				buf = buf->next;
		}
	}
}
