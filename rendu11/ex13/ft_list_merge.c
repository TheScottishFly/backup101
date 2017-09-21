/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:21:32 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 07:30:04 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list **begin_list2)
{
	t_list *buf;
	t_list *buf2;

	buf = *begin_list;
	buf2 = *begin_list2;
	while (buf->next)
		buf = buf->next;
	while (buf2->next)
	{
		buf->next = buf2;
		buf = buf2;
		buf2 = buf->next;
	}
	buf->next = buf2;
}
