/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 07:39:22 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 15:08:22 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*buf;

	i = 0;
	buf = begin_list;
	while (buf != NULL)
	{
		i++;
		buf = buf->next;
	}
	i++;
	return (i);
}
