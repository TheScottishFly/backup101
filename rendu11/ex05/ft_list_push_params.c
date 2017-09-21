/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 09:28:23 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 12:15:04 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *first;
	t_list *cursor;

	ac--;
	first = ft_create_elem(&av[ac--]);
	cursor = first;
	while (ac > 0)
	{
		cursor->next = ft_create_elem(&av[ac--]);
		cursor = cursor->next;
	}
	return (first);
}
