/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 08:45:48 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 10:16:19 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base <= 1)
		return (0);
	if (base % 2 == 0)
		base /= 2;
	else
		base = base * 3 + 1;
	return (ft_collatz_conjecture(base) + 1);
}
