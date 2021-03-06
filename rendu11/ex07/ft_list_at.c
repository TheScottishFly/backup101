/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:59:43 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 08:47:25 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*buf;

	i = 0;
	buf = begin_list;
	while (buf->next && i < nbr)
	{
		buf = buf->next;
		i++;
	}
	if (i < nbr)
		buf = NULL;
	return (buf);
}
