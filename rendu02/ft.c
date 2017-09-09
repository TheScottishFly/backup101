#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:44:48 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/09 14:25:02 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_m_putchar(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if(i != '7' || j != '8' || k != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_m_putchar(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}
