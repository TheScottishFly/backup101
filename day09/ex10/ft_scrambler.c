/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 10:27:13 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 10:30:24 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp;
	int temp1;
	int temp2;

	temp = *******c;
	temp1 = ****d;
	temp2 = *b;
	*******c = ***a;
	****d = temp;
	*b = temp1;
	***a = temp2;
}
