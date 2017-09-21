/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:52:56 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 12:06:58 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *buf;
	t_list *prev;
	t_list *next;

	buf = NULL;
	if (*begin_list != NULL)
		buf = *begin_list;
		next = buf->next;
		while (next != NULL && (*cmp)(buf->data, next->data) >= 0)
		{
			buf = next;
			next = buf->next;
		}
		prev = buf;
		buf = next;
		next = buf->next;
		while (next != NULL)
		{
			if ((*cmp)(buf->data, next->data) < 0)
			{
				prev->next = next;
				next->next = buf;
				buf->next = buf->next->next;
			}
			else
			{
				prev = buf;
				buf = next;
				next = buf->next;
			}
		}
}
