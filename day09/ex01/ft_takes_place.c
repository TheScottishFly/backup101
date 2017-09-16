/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 07:30:02 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 07:30:05 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	char	*x_letter;
	char	*y_letter;
	int		y;

	if (hour >= 12)
	{
		x_letter = "P.M.";
		hour = hour - 12;
		if (hour == 0)
			hour = 12;
	}
	else
		x_letter = "A.M.";
	if (hour + 1 >= 12)
		y_letter = "P.M.";
	else
		y_letter = "A.M.";
	if (hour + 1 > 12)
		y = 1;
	else
		y = hour + 1;
	if (x_letter[0] == 'P' && hour == 11)
		y_letter = "A.M.";
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND %d.00 %s\n", hour, x_letter, y, y_letter);
}
