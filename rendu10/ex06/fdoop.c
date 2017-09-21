/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdoop.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:02:59 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 14:59:29 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_operator(char c)
{
	if (c != '+' && c != '-' && c != '*' && c != '/')
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

char 	*ft_itoa(int nb, char* str)
{
    int i;
    int neg;
 
	i = 0;
	neg = 0;
    if (nb < 0)
    {
        neg = 1;
        nb = -nb;
    }
    while (nb != 0)
    {
		if (nb < 10)
			str[i++] = nb + '0';
		else
			str[i++] = (nb % 10) + '0';
        nb /= 10;
    }
    if (neg == 1)
        str[i++] = '-';
    str[i] = '\0';
    return (str);
}
