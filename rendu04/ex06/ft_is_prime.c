/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 17:40:17 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/09 13:43:26 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i < nb)
		i++;
	if (nb % i == 0)
		return (i);
	else
		return (0);
}

int		ft_is_prime(int nb)
{
	int i;
	int j;
	int c;

	i = 2;
	j = 0;
	c = ft_sqrt(nb);

	if (nb == 0 || nb == 1)
		return (0);
	while(i < c)
	{
		if (nb % i == 0)
		{
			j = i;
		}
		i++;
	}
	if (j != 0)
		return (0);
	return (1);
}
