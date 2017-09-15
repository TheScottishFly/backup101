/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 20:15:02 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/15 15:12:18 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (range);
	}
	range = malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (i);
}
