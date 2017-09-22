/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdoop.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:02:59 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/22 06:49:51 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_operator(char c)
{
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int nb;
	int neg;

	neg = 0;
	nb = 0;
	while (*str <= 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		else
			neg = 0;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

void	ft_putnbr(int nb)
{
	char c;

	(void)c;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
