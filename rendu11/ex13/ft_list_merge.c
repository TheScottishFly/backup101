/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:21:32 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 11:51:31 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *buf;

	if (begin_list1 != NULL && *begin_list1 != NULL)
	{
		buf = *begin_list1;
		while (buf->next != NULL)
			buf = buf->next;
		if (begin_list2 != NULL)
			buf->next = begin_list2;
	}
}
