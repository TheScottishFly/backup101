/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:31:32 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/10 14:10:57 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int calc_width_pyramid(height)
{
	int		width;
	int		loop;

	width = 0;
	loop = 1;
	while (loop <= height)
	{
	}
	return (width);
}

int main(void)
{
	int i = calc_width_pyramid(6);
	printf("%d\n", i);
	return (0);
}
