/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 18:20:27 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/10 18:20:32 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

	i = 3;
	j = 0;
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (i * i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int main()
{
	printf("%d\n", ft_is_prime(2147483629));
	return (0);
}
