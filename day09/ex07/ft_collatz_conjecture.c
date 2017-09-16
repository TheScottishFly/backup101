/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 08:45:48 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 09:54:27 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int i;

	i = 0;
	while (base != 1)
	{
		if (base % 2 == 0)
			base /= 2;
		else
			base = base * 3 + 1;
		i++;
	}
	return (i);

}
