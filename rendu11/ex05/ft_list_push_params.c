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

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*buf;
	int		i;

	buf = NULL;
	list = NULL;
	i = 0;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = buf;
		buf = list;
		i++;
	}
	return (list);
}
