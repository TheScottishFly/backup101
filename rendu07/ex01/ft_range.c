/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:57:21 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/12 20:16:34 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*int_tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		int_tab = NULL;
		return (int_tab);
	}
	int_tab = malloc((max - min) * sizeof(int));
	if (int_tab == NULL)
		exit(0);
	while (min < max)
	{
		int_tab[i] = min;
		min++;
		i++;
	}
	return (int_tab);
}
