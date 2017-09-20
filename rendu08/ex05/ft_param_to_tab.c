/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:55:23 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/20 15:55:40 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				*ft_strcpy(char *dest, char *src, int size)
{
	int i;

	i = 0;
	dest = malloc(size + 1 * sizeof(char));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;

	tab = malloc(ac + 1 * sizeof(t_stock_par));
	i = 0;
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strcpy(tab[i].copy, av[i], tab[i].size_param);
		tab[i].tab = ft_split_whitespaces(tab[i].copy);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
