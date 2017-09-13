/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 08:50:27 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/13 09:04:07 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		pt_tab_len(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			j++;
		i++;
	}
	return (j)
}

char	**ft_split_whitespaces(char *str)
{
	char	*pt_tab;
	int i;

	pt_tab = malloc(pt_tab_len(str) * sizeof(char))
}
