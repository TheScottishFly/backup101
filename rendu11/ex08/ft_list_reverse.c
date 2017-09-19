/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:15:27 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/19 15:17:48 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *buf;
	t_list *next;

	buf = *begin_list;
	if (buf->next)
	{
		next = buf->next;
		ft_list_clear(&next);
	}
	buf->next = *begin_list;
}
