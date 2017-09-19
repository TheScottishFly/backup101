/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:59:43 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/19 14:56:57 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;
	t_list *buf;

	i = 1;
	buf = begin_list;
	while(buf->next && i < nbr)
	{
		buf = buf->next;
		i++;
	}
	if (i != nbr)
		buf = 0;
	return (buf);
}
