/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:21:38 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 15:42:08 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_char(char **tab)
{
	int		count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_join(char **tab, char *sep)
{
	char *str;
	int i;
	int j;


	str = malloc(sizeof(char) * count_char(tab));
	while (tab[i])
	{
		str
	}
}
