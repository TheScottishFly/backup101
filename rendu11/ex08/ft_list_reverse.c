/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:15:27 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/19 17:25:04 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *buf;
	t_list *next;
	t_list *prev;

	buf = *begin_list;
	prev = 0;
	next = 0;
	while (buf)
	{
		next = buf->next;
		buf->next = prev;
		prev = buf;
		buf = next;
	}
	*begin_list = prev;
}
