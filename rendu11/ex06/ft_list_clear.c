/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:28:16 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 15:09:04 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *buf;
	t_list *next;

	buf = *begin_list;
	if (buf != NULL)
	{
		next = buf->next;
		ft_list_clear(&next);
	}
	else
		next = NULL;
	free(buf);
	*begin_list = NULL;
}
