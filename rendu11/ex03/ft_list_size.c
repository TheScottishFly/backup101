/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 07:39:22 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/20 15:18:09 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libstd.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*buf;

	i = 1;
	buf = begin_list;
	if (buf == NULL)
		return (0);
	while (buf->next)
	{
		i++;
		buf = buf->next;
	}
	return (i);
}
