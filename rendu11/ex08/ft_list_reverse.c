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

	buf = *begin_list;
	if (buf->next)
	{
		next = buf->next;
		ft_list_reverse(&next);
	}
	buf->next = *begin_list;
}
