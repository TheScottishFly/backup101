/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdoop.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:02:59 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 13:29:20 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		nb = nb * 10 + *str - '0';
		str++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

char	*ft_itoa(int nb)
{
	char str[11];
	int i;
	int div;

	i = 0;
	while (nb > 10)
	{
		div = nb / 10;
		str[i] = nb % div + '0';
		nb = div;
		i++;
	}
}
