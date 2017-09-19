/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 09:28:23 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/19 09:45:35 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *first;
	t_list *cursor;

	first = ft_create_elem(av[ac - 1]);
	cursor = first;
	while (ac > 1)
	{
		cursor->next = ft_create_elem(av[ac - 1]);
		cursor = cursor->next;
		ac--;
	}
	return (first);
}
