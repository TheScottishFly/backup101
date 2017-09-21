/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:28:16 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/19 13:55:09 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next;
	t_list	*buf;

	buf = *begin_list;
	while (buf != NULL)
	{
		next = buf->next;
		free(buf);
		buf = next;
	}
	*begin_list = NULL;
}
